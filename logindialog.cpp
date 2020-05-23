#include "logindialog.h"
#include "ui_logindialog.h"
#include<QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_login_clicked()       //登录验证
{
    if(ui->usr->text() == tr("root") &&
               ui->pwd->text() == tr("123456"))
    {
    accept();
    }

    else

    {
        QMessageBox::warning(this, tr("警告！"),
                              tr("用户名或密码错误！"),
                              QMessageBox::Yes);

        ui->usr->clear();    // 如果登陆失败清空内容并定位光标
        ui->pwd->clear();
        ui->usr->setFocus();
    }
}
