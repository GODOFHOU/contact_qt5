/********************************************************************************
** Form generated from reading UI file 'errordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORDIALOG_H
#define UI_ERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ErrorDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QDialog *ErrorDialog)
    {
        if (ErrorDialog->objectName().isEmpty())
            ErrorDialog->setObjectName(QStringLiteral("ErrorDialog"));
        ErrorDialog->resize(400, 300);
        label = new QLabel(ErrorDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 80, 291, 61));
        QFont font;
        font.setPointSize(21);
        label->setFont(font);
        label_2 = new QLabel(ErrorDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 190, 171, 16));
        label_3 = new QLabel(ErrorDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 160, 381, 20));
        QFont font1;
        font1.setPointSize(18);
        label_3->setFont(font1);
        pushButton = new QPushButton(ErrorDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 230, 75, 51));
        QFont font2;
        font2.setPointSize(27);
        pushButton->setFont(font2);
        label_4 = new QLabel(ErrorDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 190, 351, 31));
        label_4->setFont(font1);

        retranslateUi(ErrorDialog);

        QMetaObject::connectSlotsByName(ErrorDialog);
    } // setupUi

    void retranslateUi(QDialog *ErrorDialog)
    {
        ErrorDialog->setWindowTitle(QApplication::translate("ErrorDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("ErrorDialog", "\350\257\267\346\243\200\346\237\245\347\275\221\347\273\234\347\212\266\345\206\265\345\220\216\351\207\215\350\257\225", nullptr));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("ErrorDialog", "\346\234\254\345\272\224\347\224\250\346\225\260\346\215\256\345\255\230\346\224\276\344\272\216\344\272\221\344\270\273\346\234\272\346\225\260\346\215\256\345\272\223\344\270\255", nullptr));
        pushButton->setText(QApplication::translate("ErrorDialog", "OK", nullptr));
        label_4->setText(QApplication::translate("ErrorDialog", "\346\262\241\346\234\211\347\275\221\347\273\234\346\227\240\346\263\225\350\216\267\345\217\226\351\200\232\350\256\257\345\275\225\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErrorDialog: public Ui_ErrorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORDIALOG_H
