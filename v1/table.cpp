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
void table<T>::add(const T &obj)
{
    int i = 0;
    while (i<=100 && list[i]!=NULL) i++;
    if(i<=100 && list[i]==NULL)
    {
        *(list[i]) = obj;
    }

}
