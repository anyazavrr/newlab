#ifndef TABLE_H
#define TABLE_H
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;
template <typename T>
class table
{
    T* list[100] ;
public:
    table();
    table(const table &examp);
    void add(const T examp);


};


#endif // TABLE_H
