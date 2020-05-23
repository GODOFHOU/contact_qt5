#include "mainwindow.h"
#include <QApplication>
#include"contact.h"
#include"logindialog.h"
#include"errordialog.h"
#include<QDebug>
#include"message.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::addLibraryPath("./plugins");
    ErrorDialog e;
    if(!creatcontact())
    {   qDebug()<<"无法连接至网络";
        e.show();
        return e.exec();}

    MainWindow w;
    LoginDialog dlg;
    message m;

    if(dlg.exec()==QDialog::Accepted)
    {
        w.show();


        return a.exec();
    }

    else return 0;



}
