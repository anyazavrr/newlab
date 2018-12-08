#ifndef TABLE_H
#define TABLE_H
#include <string>
#include <math.h>
#include <iomanip>
#include "entery.h"
#include <fstream>
using namespace std;
template <typename T>
class Iterator;


template <typename T>
class table
{
    entery<T>*  list[100];
public:

    table();
    table(const table<T> &examp);
    void add(const T &value, int key2);//добавить проверку имеется ли такой
    T getvalue(int i) const;
    int getkey(int i) const;
    bool check_key(int hash) const;
    void deletekey(int hash);
    void deleteall();
    int count() const;
    Iterator<T> getbegin_iter();
    Iterator<T> getend_iter() ;
    friend class Iterator<T>;
    bool operator ==(const table<T> &other);
    T* operator [](int hash);
    friend ofstream &operator<<(ofstream &ofs, const table<T> &examp)
    {
        Iterator<T> it= examp.getbegin_iter() ;
        int k = examp.count();
        int i;
        for(i = 0; i<k; ++it)
            ofs << it.getkey() << ' ' << it.getvalue() << '\n';
        return ofs;
    }

    friend ifstream &operator>>(ifstream &ifs, table<T> &examp)
    {
        int key;
        T value;
        while(!ifs.eof())
        {
            ifs >> key >> value;
            examp.add(value, key);
        }
        return ifs;
    }



};
template <typename T>
class Iterator
{
private:
    int key;
    T value;
    int position;
    Iterator(entery<T> begin, int number, table<T>* current);
    table<T>* mytable;

public:

    Iterator &operator++();
    int getkey() const;
    T getvalue() const;
    table<T>* get_table() const;
    friend class table<T>;

};

#endif // TABLE_H
