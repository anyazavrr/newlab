#include "table.h"
#include <iostream>
template <typename T>
table<T>::table()
{
    int i;
    for(i = 0;i<=100;i++)
    {
        list[i] = NULL;
    }
}
template <typename T>
table<T>::table(const table &examp)
{
    int i;
    for(i = 0;i<=100;i++)
    {
        list[i] = examp.list[i];
    }

}
template <typename T>
void table<T>::add( T examp)
{
    int i = 0;
    while (i<=100 && list[i]!=NULL) i++;
    if(i<=100 && list[i]==NULL)
    {
        T* p = new T;
        *p = examp;
        list[i] = p;
    }

}
template <typename T>
T table<T>::getvalue(int i) const
{
    return *(list[i]);
}
template class table<char>;
template class table<int>;
