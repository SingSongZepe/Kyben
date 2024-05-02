#include "sslog.h"

#include "value/singsongzepe.h"

#include <QDebug>

SSLog::SSLog() {}

void SSLog::ln(QString msg) {
    qDebug() << SingSongZepe::sslog << SingSongZepe::LOG_LEVEL_NOR << msg;
}

void SSLog::lw(QString msg) {
    qDebug() << SingSongZepe::sslog << SingSongZepe::LOG_LEVEL_WAR << msg;
}

void SSLog::le(QString msg) {
    qDebug() << SingSongZepe::sslog << SingSongZepe::LOG_LEVEL_ERR << msg;
}
