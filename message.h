#ifndef MESSAGE_H
#define MESSAGE_H

#include <QWidget>

#include <QTcpSocket>

namespace Ui {
class message;
}

class message : public QWidget
{
    Q_OBJECT

public:
    explicit message(QWidget *parent = 0);
    ~message();

private slots:
    void on_zhunbei_clicked();

    void on_send_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::message *ui;
    QTcpSocket *tcpSocket;
};

#endif // MESSAGE_H
