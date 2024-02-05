#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

//Inheriting QObject for Meta-Object System
class Counter : public QObject
{
    //Defining Q_OBJECT Macro for Meta-Object System
    Q_OBJECT

    Q_PROPERTY(int value READ value WRITE setValue NOTIFY valueChanged FINAL)
public:
    Counter();
    int value() const;
public slots:
    void setValue(int newValue);
signals:
    void valueChanged(int newValue);

private:
    int m_value;
};

#endif // COUNTER_H
