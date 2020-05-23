#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTableView>
#include <QMessageBox>
#include <QSqlError>
#include<QDebug>
#include "message.h"
#include <QMessageBox>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setTable("contact");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select(); //选取整个表的所有行
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView->setColumnWidth(0,200);
    ui->tableView->setColumnWidth(1,500);
    ui->tableView->setColumnWidth(2,200);
    ui->tableView->setModel(model);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()   //确认键
{
    model->database().transaction(); //开始事务操作
       if (model->submitAll()) {
           model->database().commit(); //提交
       } else {
           model->database().rollback(); //回滚
           QMessageBox::warning(this, tr("tableModel"),
                                tr("数据库错误: %1")
                                .arg(model->lastError().text()));
       }
}

void MainWindow::on_pushButton_4_clicked()    //取消键
{
    model->revertAll();                     //回滚操作
}

void MainWindow::on_search_clicked()        //搜索人名键
{
    QString name = ui->lineEdit->text();
        //根据姓名进行筛选
        model->setFilter(QString("name = '%1'").arg(name));
        //显示结果
        model->select();
}

void MainWindow::on_pushButton_2_clicked()    //所有联系人键
{
    model->setTable("contact");
    model->select();
}

void MainWindow::on_pushButton_6_clicked()      //删除键
{
    //获取选中的行
       int curRow = ui->tableView->currentIndex().row();

       //删除该行
       model->removeRow(curRow);

       int ok = QMessageBox::warning(this,tr("删除当前行!"),
                                     tr("你确定删除当前行吗？"),
                                     QMessageBox::Yes,QMessageBox::No);
       if(ok == QMessageBox::No)
       {
           model->revertAll(); //如果不删除，则撤销
       }
       else model->submitAll(); //否则提交，在数据库中删除该行
}

void MainWindow::on_pushButton_5_clicked()
{
    int rowNum = model->rowCount(); //获得表的行数

      model->insertRow(rowNum); //添加一行


}

void MainWindow::on_message_clicked()     //短信键
{

    int curRow = ui->tableView->currentIndex().row();   //获取选中的行
    QModelIndex index = model->index(curRow,0);
    QString n = model->data(index).toString();

     qDebug()<<n;
      message *m=new message;
      m->show();



}

void MainWindow::on_call_clicked()
{
    QMessageBox::warning(this, tr("警告！"),
                          tr("别逗了，我们就是个通讯录！"),
                          QMessageBox::Yes,QMessageBox::No);
}

void MainWindow::on_tongxue_clicked()
{
        QString connection ="同学";
        model->setFilter(QString("connection = '%1'").arg(connection));
        model->select();
}

void MainWindow::on_tongshi_clicked()
{
        QString connection = "同事";
        model->setFilter(QString("connection = '%1'").arg(connection));
        model->select();
}

void MainWindow::on_jiaren_clicked()
{
    QString connection = "家人";
    model->setFilter(QString("connection = '%1'").arg(connection));
    model->select();
}

void MainWindow::on_search_2_clicked()    //搜索号码
{
    QString tel = ui->lineEdit->text();
        //根据号码进行筛选
        model->setFilter(QString("tel = '%1'").arg(tel));
        //显示结果.l
        model->select();
}
