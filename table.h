#ifndef TABLE_H
#define TABLE_H
#include <string>
#include <math.h>
#include <iomanip>
#include "entery.h"
#include <fstream>
#include <iostream>

using namespace std;

template <typename T,typename K>
class Iterator;


template <typename T, typename K>
class table
{
    entery<T,K>*  list[334];
    T get_value(int i) const;
    K get_key(int i) const;
public:

    table();
    table(const table<T,K> &examp);
    void add(const T &value, K key2);//добавить проверку имеется ли такой
    //private
    //
    bool check_key(K key) const;
    void delete_key(K key);
    void delete_all();
    int count() const;
    Iterator<T,K> getbegin_iter();
    Iterator<T,K> getend_iter() ;
    friend class Iterator<T,K>;
    bool operator ==( table<T,K> &other);
    T* operator [](K key);
    friend ofstream &operator<<(ofstream &ofs,  table<T,K> &examp)
    {
        Iterator<T,K> it= examp.getbegin_iter() ;
        int k = examp.count();
        int i;
        for(i = 0; i<k; ++it)
        {
            ofs << it.get_key() << " " << it.get_value() << '\n';
            i++;
        }
        return ofs;
    }

    friend ifstream &operator>>(ifstream &ifs, table<T,K> &examp)
    {
        K key;
        T value;
        while(!ifs.eof())//прочитать определенное число
        {
            ifs >> key >> value;
            examp.add(value, key);
        }
        return ifs;
    }


};
template <typename T, typename K>
class Iterator
{
private:
    K key;
    T value;
    int position;
    Iterator(entery<T,K> begin, int number, table<T,K>* current);
    table<T,K>* mytable;

public:

    Iterator &operator++();
   bool operator ==(const Iterator<T,K> &other) const
    {
        return (key == other.key);
    }

    K get_key() const;
    T get_value() const;
    table<T,K>* get_table() const;
    friend class table<T,K>;

};

#endif // TABLE_H
