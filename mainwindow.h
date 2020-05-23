#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlTableModel>
#include"message.h"
//extern QString n;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
   // message *m;

    ~MainWindow();

    static QString n;

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_search_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();
     void on_message_clicked();


     void on_call_clicked();

     void on_tongxue_clicked();

     void on_tongshi_clicked();

     void on_jiaren_clicked();

     void on_search_2_clicked();

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
};

#endif // MAINWINDOW_H
