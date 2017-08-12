#include <QSqlDatabase>
#include <QApplication>
#include <QSqlRecord>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QtCore>
#include <QtSql>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("192.168.1.194");        // host or ip name
        db.setPort(3300);                       // port number (default mysql port 3306)
        db.setDatabaseName("mysql_conn_test");  // db name
        db.setUserName("roland");               // db username
        db.setPassword("azx428");               // db password
        db.setConnectOptions(
            "SSL_KEY=/Users/rolandihasz/software_development/repository/mysql_db_connection_test/client-key.pem;"
            "SSL_CERT=/Users/rolandihasz/software_development/repository/mysql_db_connection_test/client-cert.pem;"
            "SSL_CA=/Users/rolandihasz/software_development/repository/mysql_db_connection_test/ca-cert.pem;"
            "SSL_CIPHER=DHE-RSA-AES256-SHA;");     // use SSL connection to the server
        if(!db.open()) {
            qDebug() << "DATABASE CONNECTION UNSUCCESSFUL, ERROR: " << db.lastError().text();
        }
        if(db.open()) {
            qDebug() << "SUCCESSFULLY CONNECTED TO THE DATABASE SERVER";
            QSqlQuery query(
                "SELECT "
                "dataTable.ID, "
                "dataTable.x1, "
                "dataTable.y1, "
                "dataTable.z1, "
                "dataTable.t "
                "FROM mysql_conn_test.dataTable");
            QSqlRecord rec1 = query.record();
            QSqlRecord rec2 = query.record();
            QSqlRecord rec3 = query.record();
            QSqlRecord rec4 = query.record();
            QSqlRecord rec5 = query.record();
            qDebug() << "NUMBER OF ROWS: " << query.size();   // Return number of rows
            int productCode1 = rec1.indexOf("ID");
            int productCode2 = rec2.indexOf("x1");
            int productCode3 = rec3.indexOf("y1");
            int productCode4 = rec4.indexOf("z1");
            int productCode5 = rec5.indexOf("t");
            qDebug() << "====================================================================================";
            while(query.next()) {
                qDebug() << "ROW NUMBER"
                         << query.value(productCode1).toString() << ""
                         << query.value(productCode2).toString() << ""
                         << query.value(productCode3).toString() << ""
                         << query.value(productCode4).toString() << ""
                         << query.value(productCode5).toString();
            }
            qDebug() << "====================================================================================";
            qDebug() << "COMPLETE...";
        }
    }
    return 0;
}
