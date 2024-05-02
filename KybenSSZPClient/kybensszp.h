#ifndef KYBENSSZP_H
#define KYBENSSZP_H

#include <QMainWindow>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui {
class Kybensszp;
}
QT_END_NAMESPACE

class Kybensszp : public QMainWindow
{
    Q_OBJECT

public:
    Kybensszp(QWidget *parent = nullptr);
    ~Kybensszp();

    void load_config();

public slots:
    void show_connect();

private:
    Ui::Kybensszp *ui;
    QString m_str_ip;
    quint16 m_us_port;

    QTcpSocket m_tcp_sokcet;
};
#endif // KYBENSSZP_H
