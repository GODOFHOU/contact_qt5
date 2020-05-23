#include "message.h"
#include "ui_message.h"
#include <QHostAddress>
#include"mainwindow.h"
#include<QDebug>
//QString MainWindow::n = "clue";
message::message(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::message)
{
    ui->setupUi(this);

  //ui->textEdit->setText(MainWindow::n);
   //qDebug()<<MainWindow::n;
    tcpSocket = NULL;
    tcpSocket = new QTcpSocket(this);

    setWindowTitle("发送短信");

    connect(tcpSocket, &QTcpSocket::connected,
            [=]()
            {
                ui->textread->setText("已成功连接，准备发送消息");
            }
            );

    connect(tcpSocket, &QTcpSocket::readyRead,
            [=]()
            {

                QByteArray array = tcpSocket->readAll();

                ui->textread->append(array);
            }

            );

}

message::~message()
{
    delete ui;
}

void message::on_zhunbei_clicked()     //准备按钮，连接服务器
{
    QString ip = "39.106.23.21";
    qint16 port = 8888;
     tcpSocket->connectToHost(QHostAddress(ip), port);
}

void message::on_send_clicked()
{
    QString str = ui->textsend->toPlainText();

      tcpSocket->write( str.toUtf8().data() );
      ui->textsend->clear();
}

void message::on_pushButton_3_clicked()
{
    tcpSocket->disconnectFromHost();
    tcpSocket->close();
}
