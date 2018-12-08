#include <iostream>
#include "table.h"
#include <iomanip>
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
int main()
{
    setlocale(LC_ALL, "RUS");
    table<char> test;
    test.add('a', hash("UUG"));
    test.add('f', hash("UUA"));
    test.add('l', hash("UUU"));
    table<char> test2(test);
    int i;
    for(i=0;i<3;i++)
    {
        cout<<test2.getvalue(i)<<"\n";
    }
    return 0;
}

