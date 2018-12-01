#include "entery.h"
template <typename T>
entery<T>::entery(const T &examp, int key2)
{
    value = examp;
    key = key2;
}
template <typename T>
T entery<T>::getvalue() const
{
    return value;
}
template <typename T>
int entery<T>::getkey() const
{
    return key;
}
template class entery<char>;
template class entery<int>;
