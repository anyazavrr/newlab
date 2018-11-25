#ifndef TABLE_H
#define TABLE_H
#include <string>
#include <math.h>
using namespace std;
template <typename T>
class table
{
    T* list[333];
public:
    table();
    table(const table &examp);
    friend unsigned int hash(string s);

};
unsigned int hash(string s)
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

#endif // TABLE_H
