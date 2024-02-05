#include <QCoreApplication>
#include <QDebug>
#include "counter.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    Counter a, b;
    //Two Counter instances are connected such that when first one changes,
    //the second one also changes but not vise-versa.
    QObject::connect(&a, &Counter::valueChanged, &b, &Counter::setValue);
    a.setValue(12);
    b.setValue(48);
    qDebug() << a.value();
    qDebug() << b.value();
    return app.exec();
}
