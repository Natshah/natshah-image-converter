/********************************************************************************
** Form generated from reading ui file 'MianDialog.ui'
**
** Created: Sat 21. Mar 01:46:10 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MIANDIALOG_H
#define UI_MIANDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QLabel *label_2;
    QLabel *labelLogo;
    QLabel *labelImageFormate;
    QComboBox *comboBoxFormat;
    QLabel *labelSize;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelWidth;
    QLabel *labelHeight;
    QLineEdit *lineEditW;
    QLineEdit *lineEditH;
    QProgressBar *progressBar;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *labelSorceFolder;
    QLineEdit *lineEditSorceFolder;
    QPushButton *pushButtonSorceFolder;
    QLabel *labelTargetFolder;
    QLineEdit *lineEditTargetFolder;
    QPushButton *pushButtonTargetFolder;
    QPushButton *pushButtonConvertImages;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QString::fromUtf8("MainDialog"));
        MainDialog->setWindowModality(Qt::ApplicationModal);
        MainDialog->resize(758, 232);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainDialog->sizePolicy().hasHeightForWidth());
        MainDialog->setSizePolicy(sizePolicy);
        MainDialog->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8(":/Images/bin/images/icon.gif")), QIcon::Normal, QIcon::Off);
        MainDialog->setWindowIcon(icon);
        MainDialog->setAutoFillBackground(false);
        MainDialog->setSizeGripEnabled(false);
        MainDialog->setModal(false);
        label_2 = new QLabel(MainDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 3, 401, 71));
        labelLogo = new QLabel(MainDialog);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        labelLogo->setGeometry(QRect(20, 0, 361, 71));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/Images/bin/images/logo.gif")));
        labelImageFormate = new QLabel(MainDialog);
        labelImageFormate->setObjectName(QString::fromUtf8("labelImageFormate"));
        labelImageFormate->setGeometry(QRect(20, 160, 74, 20));
        comboBoxFormat = new QComboBox(MainDialog);
        comboBoxFormat->setObjectName(QString::fromUtf8("comboBoxFormat"));
        comboBoxFormat->setGeometry(QRect(100, 160, 96, 20));
        labelSize = new QLabel(MainDialog);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));
        labelSize->setGeometry(QRect(220, 160, 41, 20));
        layoutWidget = new QWidget(MainDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(267, 150, 141, 41));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelWidth = new QLabel(layoutWidget);
        labelWidth->setObjectName(QString::fromUtf8("labelWidth"));

        gridLayout->addWidget(labelWidth, 0, 0, 1, 1);

        labelHeight = new QLabel(layoutWidget);
        labelHeight->setObjectName(QString::fromUtf8("labelHeight"));

        gridLayout->addWidget(labelHeight, 0, 1, 1, 1);

        lineEditW = new QLineEdit(layoutWidget);
        lineEditW->setObjectName(QString::fromUtf8("lineEditW"));

        gridLayout->addWidget(lineEditW, 1, 0, 1, 1);

        lineEditH = new QLineEdit(layoutWidget);
        lineEditH->setObjectName(QString::fromUtf8("lineEditH"));
        lineEditH->setMaxLength(32767);
        lineEditH->setFrame(true);

        gridLayout->addWidget(lineEditH, 1, 1, 1, 1);

        progressBar = new QProgressBar(MainDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 200, 731, 23));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        layoutWidget1 = new QWidget(MainDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(18, 80, 731, 58));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        labelSorceFolder = new QLabel(layoutWidget1);
        labelSorceFolder->setObjectName(QString::fromUtf8("labelSorceFolder"));

        gridLayout_2->addWidget(labelSorceFolder, 0, 0, 1, 1);

        lineEditSorceFolder = new QLineEdit(layoutWidget1);
        lineEditSorceFolder->setObjectName(QString::fromUtf8("lineEditSorceFolder"));
        lineEditSorceFolder->setReadOnly(true);

        gridLayout_2->addWidget(lineEditSorceFolder, 0, 1, 1, 1);

        pushButtonSorceFolder = new QPushButton(layoutWidget1);
        pushButtonSorceFolder->setObjectName(QString::fromUtf8("pushButtonSorceFolder"));

        gridLayout_2->addWidget(pushButtonSorceFolder, 0, 2, 1, 1);

        labelTargetFolder = new QLabel(layoutWidget1);
        labelTargetFolder->setObjectName(QString::fromUtf8("labelTargetFolder"));

        gridLayout_2->addWidget(labelTargetFolder, 1, 0, 1, 1);

        lineEditTargetFolder = new QLineEdit(layoutWidget1);
        lineEditTargetFolder->setObjectName(QString::fromUtf8("lineEditTargetFolder"));
        lineEditTargetFolder->setReadOnly(true);

        gridLayout_2->addWidget(lineEditTargetFolder, 1, 1, 1, 1);

        pushButtonTargetFolder = new QPushButton(layoutWidget1);
        pushButtonTargetFolder->setObjectName(QString::fromUtf8("pushButtonTargetFolder"));

        gridLayout_2->addWidget(pushButtonTargetFolder, 1, 2, 1, 1);

        pushButtonConvertImages = new QPushButton(MainDialog);
        pushButtonConvertImages->setObjectName(QString::fromUtf8("pushButtonConvertImages"));
        pushButtonConvertImages->setGeometry(QRect(440, 150, 311, 41));
        pushButtonConvertImages->setIcon(icon);
        pushButtonConvertImages->setIconSize(QSize(32, 32));

        retranslateUi(MainDialog);

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QApplication::translate("MainDialog", "Natshah Image Converter", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">Natshah Image Converter Tool</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.ahamcoproperties.com\"><span style=\" font-size:12pt; text-decoration: underline; color:#0000ff;\">www.natshah.com</span></a></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" fon"
                        "t-size:9pt;\">Copyright \302\251 2008 Natshah.com</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelLogo->setText(QString());
        labelImageFormate->setText(QApplication::translate("MainDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Image Format :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        comboBoxFormat->clear();
        comboBoxFormat->insertItems(0, QStringList()
         << QApplication::translate("MainDialog", "JPG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainDialog", "JPEG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainDialog", "PNG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainDialog", "BMP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainDialog", "PBM", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainDialog", "PGM", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainDialog", "PPM", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainDialog", "XBM", 0, QApplication::UnicodeUTF8)
        );
        labelSize->setText(QApplication::translate("MainDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Size :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelWidth->setText(QApplication::translate("MainDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Width</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelHeight->setText(QApplication::translate("MainDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Height</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEditW->setInputMask(QString());
        lineEditW->setText(QApplication::translate("MainDialog", "800", 0, QApplication::UnicodeUTF8));
        lineEditH->setInputMask(QString());
        lineEditH->setText(QApplication::translate("MainDialog", "600", 0, QApplication::UnicodeUTF8));
        labelSorceFolder->setText(QApplication::translate("MainDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Source Path :</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButtonSorceFolder->setText(QApplication::translate("MainDialog", "Browse  ...", 0, QApplication::UnicodeUTF8));
        labelTargetFolder->setText(QApplication::translate("MainDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Target Path :</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButtonTargetFolder->setText(QApplication::translate("MainDialog", "Browse ...", 0, QApplication::UnicodeUTF8));
        pushButtonConvertImages->setText(QApplication::translate("MainDialog", "  Convert Images", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MainDialog);
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIANDIALOG_H
