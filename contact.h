#ifndef CONTACT_H
#define CONTACT_H
#include<QSqlDatabase>
#include<QSqlQuery>
static bool creatcontact()
{
 /*   QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("database.db");*/

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("39.106.23.21");
     db.setPort(3306);
    db.setDatabaseName("mydata");
    db.setUserName("root");
    db.setPassword("");

        if(!db.open())
            return false;
        QSqlQuery query(db);
        query.exec("SET NAMES 'Latin1'");
        query.exec("create table contact (name varchar(20) primary key,tel varchar(20),connection varchar(20))");
        query.exec("insert into contact values ('刘明','15936156496','同学')");
        query.exec("insert into contact values ('陈刚','15698956562','家人')");
        query.exec("insert into contact values ('王红','18337835698','同学')");
        query.exec("insert into contact values ('王安','11637835598','家人')");
        query.exec("insert into contact values ('张三','17637835698','同学')");
        query.exec("insert into contact values ('李四','18965835698','同事')");
        query.exec("insert into contact values ('王五','13637835698','同学')");
        query.exec("insert into contact values ('侯亚威','18337356560','同事')");
        query.exec("insert into contact values ('王森','18337835286','同事')");
        return true;
}


#endif // CONTACT_H
