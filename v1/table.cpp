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
void table<T>::add( const T &value, int key2)
{
    int i = 0;
    while (i<=100 && list[i]!=NULL) i++;
    if(i<=100 && list[i]==NULL)
    {
        entery<T>* p = new entery<T>(value, key2);
        list[i] = p;
    }

}
template <typename T>
void table<T>::deletekey(int hash)
{
    bool mainflag = false;
    while (mainflag==false)
    {
        mainflag == true;
        bool flag = false;
        int i = 0;
        while(flag == false && i<=100  && list[i]!= NULL)
        {
            if(list[i]->getkey()==hash) flag =true ;
            i++;
        }
        if (flag == true)
        {
            i--;
            mainflag == false;
            while(i<=100 && list[i]!=NULL)
            {
                list[i] = list[i+1];
                i++;
            }
        }
    }

}

template <typename T>
T table<T>::getvalue(int i) const
{
    T value = list[i]->getvalue();
    return value;
}
template <typename T>
bool table<T>::check_key(int hash) const
{
    int i = 0;
    bool flag = false;
    while(list[i]!=NULL && i<=100)
    {
        if (list[i]->getkey()==hash)
            flag = true;
    }
    return flag;
}
template <typename T>
Iterator<T>::Iterator()
{
    curr = NULL;
    position = -1;
}

template <typename T>
Iterator<T> &Iterator<T>::operator++()
{
    if (curr !=NULL && position!=100)
    {
        position = position + 1;
        curr = curr +1;
    }
    return curr;
}
template <typename T>
int Iterator<T> ::getkey() const
{
    return curr->getkey();
}
template <typename T>
T Iterator<T> ::getvalue() const
{
    return curr->getvalue();
}

template class table<char>;
template class table<int>;
