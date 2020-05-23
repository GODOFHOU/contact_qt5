/********************************************************************************
** Form generated from reading UI file 'message.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_H
#define UI_MESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_message
{
public:
    QLabel *label;
    QPushButton *zhunbei;
    QTextEdit *textread;
    QTextEdit *textsend;
    QPushButton *send;
    QPushButton *pushButton_3;

    void setupUi(QWidget *message)
    {
        if (message->objectName().isEmpty())
            message->setObjectName(QStringLiteral("message"));
        message->resize(898, 700);
        label = new QLabel(message);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 50, 211, 71));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        zhunbei = new QPushButton(message);
        zhunbei->setObjectName(QStringLiteral("zhunbei"));
        zhunbei->setGeometry(QRect(620, 40, 181, 81));
        zhunbei->setFont(font);
        textread = new QTextEdit(message);
        textread->setObjectName(QStringLiteral("textread"));
        textread->setGeometry(QRect(20, 220, 381, 331));
        textread->setFont(font);
        textsend = new QTextEdit(message);
        textsend->setObjectName(QStringLiteral("textsend"));
        textsend->setGeometry(QRect(450, 220, 411, 331));
        textsend->setFont(font);
        send = new QPushButton(message);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(500, 610, 141, 71));
        send->setFont(font);
        pushButton_3 = new QPushButton(message);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(690, 610, 161, 71));
        pushButton_3->setFont(font);

        retranslateUi(message);

        QMetaObject::connectSlotsByName(message);
    } // setupUi

    void retranslateUi(QWidget *message)
    {
        message->setWindowTitle(QApplication::translate("message", "Form", nullptr));
        label->setText(QApplication::translate("message", "\345\207\206\345\244\207\350\201\224\347\273\234\357\274\232", nullptr));
        zhunbei->setText(QApplication::translate("message", "\345\207\206\345\244\207", nullptr));
        send->setText(QApplication::translate("message", "\345\217\221\351\200\201", nullptr));
        pushButton_3->setText(QApplication::translate("message", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class message: public Ui_message {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_H
