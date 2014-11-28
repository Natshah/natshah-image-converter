#ifndef MAINDIALOGIMPL_H
#define MAINDIALOGIMPL_H
//
#include <QDialog>
#include "ui_MianDialog.h"
//
class MainDialogImpl : public QDialog, public Ui::MainDialog
{
Q_OBJECT
public:
	MainDialogImpl( QWidget * parent = 0, Qt::WFlags f = 0 );
private slots:
	void on_pushButtonConvertImages_clicked();
	void on_pushButtonSorceFolder_clicked();
	void on_pushButtonTargetFolder_clicked();
};
#endif





