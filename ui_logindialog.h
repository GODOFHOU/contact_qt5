/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *usr;
    QLineEdit *pwd;
    QPushButton *login;
    QPushButton *exit;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(400, 300);
        QFont font;
        font.setPointSize(25);
        LoginDialog->setFont(font);
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 121, 61));
        label->setFont(font);
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 120, 91, 51));
        label_2->setFont(font);
        usr = new QLineEdit(LoginDialog);
        usr->setObjectName(QStringLiteral("usr"));
        usr->setGeometry(QRect(170, 60, 181, 41));
        usr->setFont(font);
        pwd = new QLineEdit(LoginDialog);
        pwd->setObjectName(QStringLiteral("pwd"));
        pwd->setGeometry(QRect(170, 130, 181, 41));
        pwd->setFont(font);
        pwd->setEchoMode(QLineEdit::Password);
        login = new QPushButton(LoginDialog);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(30, 230, 91, 41));
        exit = new QPushButton(LoginDialog);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(230, 230, 91, 41));

        retranslateUi(LoginDialog);
        QObject::connect(exit, SIGNAL(clicked()), LoginDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        login->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        exit->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
