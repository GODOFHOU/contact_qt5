/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *search;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *message;
    QPushButton *call;
    QPushButton *tongxue;
    QPushButton *tongshi;
    QPushButton *jiaren;
    QPushButton *search_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1004, 653);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        search = new QPushButton(centralWidget);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(40, 30, 111, 61));
        QFont font1;
        font1.setPointSize(22);
        search->setFont(font1);
        search->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QStringLiteral("search.ico"), QSize(), QIcon::Normal, QIcon::Off);
        search->setIcon(icon);
        search->setIconSize(QSize(30, 30));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 30, 201, 61));
        lineEdit->setSizeIncrement(QSize(0, 0));
        lineEdit->setBaseSize(QSize(0, 0));
        lineEdit->setFont(font1);
        lineEdit->setMaxLength(32766);
        lineEdit->setFrame(true);
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 140, 411, 431));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        tableView->setFont(font2);
        tableView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tableView->setTabletTracking(false);
        tableView->setLayoutDirection(Qt::LeftToRight);
        tableView->setAutoFillBackground(false);
        tableView->setFrameShape(QFrame::StyledPanel);
        tableView->setFrameShadow(QFrame::Sunken);
        tableView->setMidLineWidth(0);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView->setAutoScrollMargin(16);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 150, 221, 61));
        QFont font3;
        font3.setPointSize(27);
        pushButton_2->setFont(font3);
        QIcon icon1;
        icon1.addFile(QStringLiteral("contact.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(35, 35));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(480, 230, 221, 61));
        pushButton_3->setFont(font3);
        QIcon icon2;
        icon2.addFile(QStringLiteral("ok.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(35, 35));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(480, 320, 221, 61));
        pushButton_4->setFont(font3);
        QIcon icon3;
        icon3.addFile(QStringLiteral("delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(35, 35));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(480, 410, 221, 61));
        pushButton_5->setFont(font3);
        QIcon icon4;
        icon4.addFile(QStringLiteral("add_user.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(35, 35));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(480, 500, 221, 61));
        pushButton_6->setFont(font3);
        QIcon icon5;
        icon5.addFile(QStringLiteral("garbage.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_6->setIconSize(QSize(35, 35));
        message = new QPushButton(centralWidget);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(760, 150, 191, 61));
        message->setFont(font3);
        call = new QPushButton(centralWidget);
        call->setObjectName(QStringLiteral("call"));
        call->setGeometry(QRect(760, 230, 191, 61));
        call->setFont(font3);
        tongxue = new QPushButton(centralWidget);
        tongxue->setObjectName(QStringLiteral("tongxue"));
        tongxue->setGeometry(QRect(760, 320, 191, 61));
        tongxue->setFont(font3);
        tongshi = new QPushButton(centralWidget);
        tongshi->setObjectName(QStringLiteral("tongshi"));
        tongshi->setGeometry(QRect(760, 410, 191, 61));
        tongshi->setFont(font3);
        jiaren = new QPushButton(centralWidget);
        jiaren->setObjectName(QStringLiteral("jiaren"));
        jiaren->setGeometry(QRect(760, 500, 191, 61));
        jiaren->setFont(font3);
        search_2 = new QPushButton(centralWidget);
        search_2->setObjectName(QStringLiteral("search_2"));
        search_2->setGeometry(QRect(350, 30, 111, 61));
        search_2->setFont(font1);
        search_2->setMouseTracking(false);
        search_2->setIcon(icon);
        search_2->setIconSize(QSize(30, 30));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1004, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        search->setText(QApplication::translate("MainWindow", "\346\220\234\345\220\215", nullptr));
        lineEdit->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\211\200\346\234\211\350\201\224\347\263\273\344\272\272", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        message->setText(QApplication::translate("MainWindow", "\347\237\255\344\277\241", nullptr));
        call->setText(QApplication::translate("MainWindow", "\347\224\265\350\257\235", nullptr));
        tongxue->setText(QApplication::translate("MainWindow", "\345\220\214\345\255\246", nullptr));
        tongshi->setText(QApplication::translate("MainWindow", "\345\220\214\344\272\213", nullptr));
        jiaren->setText(QApplication::translate("MainWindow", "\345\256\266\344\272\272", nullptr));
        search_2->setText(QApplication::translate("MainWindow", "\346\220\234\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
