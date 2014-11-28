#include "maindialogimpl.h"
#include <QtGui>
#include <QDir>
#include <QImageWriter>
#include <QImageReader>
#include <QMessageBox>
#include <qvalidator.h>

//
MainDialogImpl::MainDialogImpl( QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
{
	setupUi(this);

		// Validate Width of the image.
	QRegExp WRegExp("\\d{1,10}");
	lineEditW->setValidator(new QRegExpValidator(WRegExp, this));
	
		// Validate Highte of the image.
	QRegExp HRegExp("\\d{1,10}");
	lineEditH->setValidator(new QRegExpValidator(HRegExp, this));
	
}
//



void MainDialogImpl::on_pushButtonSorceFolder_clicked()
{
	QString directory = QFileDialog::getExistingDirectory(this,
                                   tr("Select Sorce Folder"), QDir::homePath());
            lineEditSorceFolder->setText(directory);

}

void MainDialogImpl::on_pushButtonTargetFolder_clicked()
{
		QString directory = QFileDialog::getExistingDirectory(this,
                                   tr("Select Target Folder"), QDir::homePath());
        lineEditTargetFolder->setText(directory);
}


void MainDialogImpl::on_pushButtonConvertImages_clicked()
{
	int validated = 0;
	
	if (lineEditSorceFolder->text().isEmpty())
		validated = 1;
	else if (lineEditTargetFolder->text().isEmpty())
		validated = 2;
	else if (!lineEditW->hasAcceptableInput())
		validated = 3;
	else if (!lineEditH->hasAcceptableInput())
		validated = 4;
		
	switch (validated)
	{
		case 0:{break;}
		case 1:{QMessageBox::warning(0,"Image Converter::Validation Error #1","You need to select Source Path");break;}
		case 2:{QMessageBox::warning(0,"Image Converter::Validation Error #2","You need to select Target Path");break;}
		case 3:{QMessageBox::warning(0,"Image Converter::Validation Error #3","You need to set the Width of the Image");break;}
		case 4:{QMessageBox::warning(0,"Image Converter::Validation Error #4","You need to set the Height of the Image");break;}
		default:break;
	}

	if ( validated == 0)
	{
		
	
	// get the direcotry name for the sorce folder.
	QDir SorceDirectory = QDir(lineEditSorceFolder->text());
	QDir TargetDirectory = QDir(lineEditTargetFolder->text());
    QStringList files;
    QStringList fileTypes;
    
    
    // just load Image files with this formats.
    fileTypes << "*.tiff"<< "*.TIFF"<<"*.tif"<<"*.TIF" << "*.BMP" <<"*.GIF" <<"*.JPG" <<"*.JPEG" <<"*.MNG" <<"*.PNG" <<"*.PBM" <<"*.PGM" <<"*.PPM" <<"*.XBM"<<"*.XPM"<< "*.bmp" <<"*.gif" <<"*.jpg" <<"*.jpeg" <<"*.mng" <<"*.png" <<"*.pbm" <<"*.pgm" <<"*.ppm" <<"*.xbm"<<"*.xpm" ;
    files = SorceDirectory.entryList(QStringList(fileTypes),
                                    QDir::Files | QDir::NoSymLinks);
    
    if (files.size()>0)
    {
     QProgressDialog progressDialog(this);
     progressDialog.setCancelButtonText(tr("&Cancel"));
     progressDialog.setRange(0, files.size());
     progressDialog.setWindowTitle(tr("Converting Files"));
     
     progressBar->setMaximum(files.size());
     progressBar->setValue(0);
     
     for (int i = 0; i < files.size(); ++i) {
         progressDialog.setValue(i);
         progressDialog.setLabelText(tr("Converting Image number %1 of %2...").arg(i).arg(files.size()));
         qApp->processEvents();
         
         progressBar->setValue(i+1);

         if (progressDialog.wasCanceled())
             break;

         QImageReader srcImage(SorceDirectory.absoluteFilePath(files[i]));
         QSize scaledSize(lineEditW->text().toInt(),lineEditH->text().toInt());
         srcImage.setScaledSize(scaledSize);
         QImage img = srcImage.read();


		if( !img.isNull() )
		{
			QStringList fileName = files[i].split(".");
			QString targetFileName = fileName[0]+"."+comboBoxFormat->currentText();
			QImageWriter tarImage(TargetDirectory.absoluteFilePath(targetFileName),comboBoxFormat->currentText().toUtf8());
			tarImage.setText("","");			
			tarImage.write(img);
		}
	  }
	 }
	 else
	 {
	 	QMessageBox::warning(0,"Image Converter::Validation Error #5","Source Path is Empty of supported Image files");
 	}
	}
}
