#ifndef TABLE_H
#define TABLE_H
#include <string>
#include <math.h>
#include <iomanip>
#include "entery.h"
using namespace std;
template <typename T>
class Iterator
{
public:
    Iterator();

    Iterator &operator++();
    Iterator &operator--();
    int getkey() const;
    T getvalue() const;

private:
    entery<T> *curr;
    int position;
};

template <typename T>
class table
{
    entery<T>*  list[100];
public:
    table();
    table(const table &examp);
    void add(const T &value, int key2);
    T getvalue(int i) const;
    bool check_key(int hash) const;
    void deletekey(int hash);
    friend class Iterator<T>;


};


#endif // TABLE_H
