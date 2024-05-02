#include "kybensszp.h"
#include "ui_kybensszp.h"

#include "sszptcpserver.h"
#include "utils/sslog.h"

#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <QHostAddress>

Kybensszp::Kybensszp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Kybensszp)
{
    ui->setupUi(this);

    load_config();
    if (SSZPTcpServer::get_instance().listen(QHostAddress(this->m_str_ip), this->m_us_port)) {

    } else {
        SSLog::lw("can't start to listen");
    }
}

Kybensszp::~Kybensszp()
{
    delete ui;
}

void Kybensszp::load_config() {
    QFile pf(":/server.config");

    if (pf.open(QIODevice::ReadOnly)) {
        QByteArray ba_data = pf.readAll();
        QString str_data = ba_data.toStdString().c_str();
        QStringList str_list = str_data.split("\r\n");

        this->m_str_ip = str_list.at(0);
        this->m_us_port = str_list.at(1).toUShort();

        qDebug() << this->m_str_ip << "\r\n" << this->m_us_port;

        pf .close();
    } else {
        QMessageBox::critical(this, "open config", "open file failed");
    }
}
