#include "counter.h"

Counter::Counter() {}

int Counter::value() const
{
    return m_value;
}

void Counter::setValue(int newValue)
{
    if (m_value == newValue)
        //Note: It is important to check this. In case two instances are connected with each other.
        //It can cause infinite loop of Signals and Slots.
        return;
    m_value = newValue;
    emit valueChanged(newValue);
}
