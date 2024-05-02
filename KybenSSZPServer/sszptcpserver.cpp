#include "sszptcpserver.h"

SSZPTcpServer::SSZPTcpServer() {}

SSZPTcpServer& SSZPTcpServer::get_instance() {
    static SSZPTcpServer ins;
    return ins;
}

void SSZPTcpServer::incomingConnection(qintptr handle) {
    qDebug() << "connect";
}
