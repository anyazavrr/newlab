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
table<T>::table(const table<T> &examp)
{
    int i;
    for(i = 0;i<100;i++)
    {
        if (examp.list[i]!= NULL)
        {
            list[i] = new entery<T>(examp.list[i]->getvalue(), examp.list[i]->getkey());
        }
        else
        {
            list[i] = NULL;
        }
    }

}
/*
template <typename T>
table<T>::table(const table<T> &examp)
{
    int i;
    for(i = 0;i<100;i++)
    {
        list[i] = examp.list[i];
    }

}*/

template <typename T>
void table<T>::add( const T &value, int key2)
{
    int i = 0;
    while (i<100 && list[i]!=NULL) i++;
    if (i == 0)
    {
        cout<<"i = 0\n";
        list[i] = new entery<T>(value, key2);
    }
    if(i<100 && list[i]==NULL)
    {
        list[i] = new entery<T>(value, key2);
    }

}

template <typename T>
void table<T>::deletekey(int hash)
{
    cout<<"del\n";
    bool mainflag = false;
    while (mainflag==false)
    {
        cout<<"in\n";
        mainflag = true;
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
            cout<<"true\n";
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
Iterator<T> table<T>::getbegin_iter() const
{
    Iterator<T> begin(*(list[0]), 0, this);
    return begin;
}


template <typename T>
Iterator<T> table<T>::getend_iter()
{
    if (list[0] == NULL)
    {
        Iterator<T> begin(*(list[0]), 0, this);
        return begin;
    }
    else
    {
        int i = 0;
        while (list[i]!= NULL && i<=100) i++;
        i--;
        Iterator<T> end(*(list[i]), i, this);
        return end;
    }
}


template <typename T>
void table<T>::deleteall()
{
    int i = 0;
    while(i<100 && list[i]!= NULL)
    {
        delete(list[i]);
        list[i] = NULL;
        i++;
    }
}

template <typename T>
int table<T>::getkey(int i) const
{
    return list[i]->getkey();
}

template <typename T>
int table<T>::count() const
{
    int i = 0;
    int amount = 0;
    while(i<100 && list[i]!= NULL)
    {
        amount++;
        i++;
    }
    return amount;
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
    while(list[i]!=NULL && i<100)
    {
        if (list[i]->getkey()==hash)
            flag = true;
        i++;
    }
    return flag;
}


template <typename T>
Iterator<T>::Iterator(entery<T> begin, int number, table<T>* current)
{
    key = begin.getkey();
    value = begin.getvalue();
    position = number;
    mytable = current;
}

template <typename T>
Iterator<T> &Iterator<T>::operator++()
{
    int pos = position+1;
    entery<T> *p= mytable->list[pos];
    if (p!= NULL )
    {
        position = pos;
        key = mytable->getkey(position);
        value = mytable->getvalue(position);
    }
    return *this;
}

template <typename T>
int Iterator<T> ::getkey() const
{
    return key;
}

template <typename T>
T Iterator<T> ::getvalue() const
{
    return value;
}

template <typename T>
table<T>* Iterator<T> ::get_table() const
{
    return mytable;
}

template <typename T>
bool table<T>::operator ==( table<T> &other)
{
    int i = 0;
    for(;i<100, list[i]!= NULL, other.list[i]!= NULL;i++)
    {
        if((list[i]->getkey()!=other.list[i]->getkey())|| (list[i]->getvalue()!=other.list[i]->getvalue()) )
            return false;
    }
    if (((list[i]==NULL) && (other.list[i]!=NULL))||((list[i]!=NULL) && (other.list[i]==NULL)))
        return false;
    return true;
}

template <typename T>
T* table<T>::operator [](int hash)
{
    int i = 0;
    bool flag = false;
    cout<<"\nstep0\n";
    cout<<this->getvalue(0);
    while(list[i]!=NULL && i<100 && flag == false)
    {
        cout<<"\nstep1\n";
        if (list[i]->getkey()==hash)
            flag = true;
        i++;

    }
    if (flag == true)
    {
        T* p = new T;
        cout<<"\nstep2\n";
        i--;
        *p = list[i]->getvalue();
        return p;
    }

    else
    {
        cout<<"\nstep ((\n";
        return NULL;
    }
}

template class table<char>;
template class table<int>;
template class Iterator<char>;
template class Iterator<int>;
