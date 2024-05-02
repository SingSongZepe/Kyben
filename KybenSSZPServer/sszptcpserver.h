#ifndef SSZPTCPSERVER_H
#define SSZPTCPSERVER_H

#include <QTcpServer>

class SSZPTcpServer : public QTcpServer
{
    Q_OBJECT // for signal and slot
public:
    SSZPTcpServer();

    static SSZPTcpServer& get_instance();

    // virtual method
    void incomingConnection(qintptr handle);
};

#endif // SSZPTCPSERVER_H
