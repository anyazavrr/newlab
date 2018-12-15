#include "table.h"
#include <iostream>
#include <string>
using namespace std;
unsigned int hash(string s)
{
    if(s.length()==3)
    {
        unsigned int k = 0;
        int i;
        for(i=0; i<4;i++)
        {
            if (s[i]=='C'||s[i]=='c')
            {
                k = k + pow(10.0, 2-i);
            }
            if (s[i]=='A'||s[i]=='a')
            {
                k = k +2* pow(10.0, 2-i);
            }
            if (s[i]=='G'||s[i]=='g')
            {
                k = k +3* pow(10.0, 2-i);
            }
        }
        return k;
    }
    else
    return 334;
}
template <typename T, typename K>
table<T,K>::table()
{
    int i;
    for(i = 0;i<334;i++)
    {
        list[i] = NULL;
    }
}

template <typename T, typename K>
table<T,K>::table(const table<T,K> &examp)
{
    int i;
    for(i = 0;i<334;i++)
    {
        if (examp.list[i]!= NULL)
        {
            list[i] = new entery<T,K>(examp.list[i]->get_value(), examp.list[i]->get_key());
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

template <typename T, typename K>
void table<T,K>::add( const T &value, K key2)
{
    int i = 0;
    int h = hash(key2);
    bool flag = false;
    while(i<334)
    {
        if(list[i]!=NULL)
        {
            if (list[i]->get_key()==key2)
                flag = true;
        }
        i++;
    }
    if (flag == false)
    {
        if(h<334 && list[h]==NULL)
        {
            list[h] = new entery<T,K>(value, key2);
        }
    }

}

template <typename T, typename K>
void table<T,K>::delete_key(K key)
{
    int i = hash(key);
    if (i<334 && list[i]!=NULL)
        {
            delete(list[i]);
            list[i] = NULL;
        }
}

template <typename T, typename K>
Iterator<T,K> table<T,K>::getbegin_iter()
{
    int i = 0;
    while (list[i]== NULL && i<334) i++;
    if(i<334)
    {
        Iterator<T,K> begin(*(list[i]), i, this);
        return begin;
    }
    else
    {
        Iterator<T,K> begin(*(list[0]), 0, this);
           return begin;
    }

}


template <typename T, typename K>
Iterator<T,K> table<T,K>::getend_iter()
{
        int i = 333;
        while (list[i]== NULL && i>=0) i--;
        if(i>=0)
        {
            Iterator<T,K> begin(*(list[i]), i, this);
            return begin;
        }
        else
        {
            Iterator<T,K> begin(*(list[0]), 0, this);
               return begin;
        }
}


template <typename T, typename K>
void table<T, K>::delete_all()
{
    int i = 0;
    while(i<334)
    {
        if(list[i]!= NULL)
            delete(list[i]);
        list[i] = NULL;
        i++;
    }
}

template <typename T, typename K>
K table<T,K>::get_key(int i) const
{
    return list[i]->get_key();
}

template <typename T, typename K>
int table<T,K>::count() const
{
    int i = 0;
    int amount = 0;
    while(i<334)
    {
        if(list[i]!= NULL)
            amount++;
        i++;
    }
    return amount;
}

template <typename T,typename K>
T table<T,K>::get_value(int i) const
{
    T value = list[i]->get_value();
    return value;
}

template <typename T,typename K>
bool table<T,K>::check_key(K key) const
{
    int i = hash(key);
    bool flag = false;
    if (list[i]!= NULL && list[i]->get_key()==key)
        flag = true;
    return flag;
}


template <typename T,typename K>
Iterator<T,K>::Iterator(entery<T,K> begin, int number, table<T,K>* current)
{
    key = begin.get_key();
    value = begin.get_value();
    position = number;
    mytable = current;
}

template <typename T,typename K>
Iterator<T,K> &Iterator<T,K>::operator++()
{
    int i = position;
    i++;
    while (i<334 && mytable->list[i]==NULL ) i++;
    if (i<334 )
    {
        position = i;
        key = mytable->get_key(position);
        value = mytable->get_value(position);
    }
    return *this;
}

template <typename T,typename K>
K Iterator<T,K> ::get_key() const
{
    return key;
}

template <typename T,typename K>
T Iterator<T,K> ::get_value() const
{
    return value;
}

template <typename T,typename K>
table<T,K>* Iterator<T,K> ::get_table() const
{
    return mytable;
}

template <typename T,typename K>
bool table<T,K>::operator ==( table<T,K> &other)
{
    int i = 0;
    while(i<334)
    {

        if(list[i]==NULL && other.list[i]==NULL)
        {

            i++;
        }
        else if(list[i]!=NULL && other.list[i]!=NULL)
        {
            cout<<"not NULL";

            if(!((*(list[i]))==(*(other.list[i])))) return false;//эта часть не робит
            else i++;
        }
        else
        {
            cout<<"ff\n";
            if(list[i]!=NULL) cout<<list[i]->get_value();
            if (other.list[i]!=NULL) cout<<other.list[i]->get_value();
            return false;
        }
    }
    return true;
}

template <typename T,typename K>
T* table<T,K>::operator [](K key)
{
    int i = hash(key);
    if (i<334)
    {
        if (list[i]!=NULL)
        {
            T* p = new T;
            *p = list[i]->get_value();
            return p;
        }
        else
        {
            return NULL;
        }
    }
}

template class table<char,string>;
template class table<int,string>;
template class Iterator<char,string>;
template class Iterator<int,string>;
