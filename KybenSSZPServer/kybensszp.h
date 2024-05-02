#ifndef KYBENSSZP_H
#define KYBENSSZP_H

#include <QMainWindow>

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

private:
    Ui::Kybensszp *ui;
    QString m_str_ip;
    quint16 m_us_port;
};
#endif // KYBENSSZP_H
