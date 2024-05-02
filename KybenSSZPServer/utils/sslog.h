#ifndef SSLOG_H
#define SSLOG_H

#include <QString>

class SSLog
{
public:
    SSLog();

    static void ln(QString msg);
    static void lw(QString msg);
    static void le(QString msg);
};

#endif // SSLOG_H
