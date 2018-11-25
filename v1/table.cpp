#include "table.h"
template <typename T>
table<T>::table()
{
    int i;
    for(i = 0;i<=333;i++)
    {
        list[i] = NULL;
    }
}
template <typename T>
table<T>::table(const table &examp)
{
    int i;
    for(i = 0;i<=333;i++)
    {
        list[i] = examp.list[i];
    }

}
