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
    table <char> test;
    char obj = 'k';
    test.add(obj, 5);
    char t = test.getvalue(0);
    cout<<t<<"\n";
    test.add('a', 6);
    t = test.getvalue(0);
    cout<<t<<"\n";
    t = test.getvalue(1);
    cout<<t<<"\n";
    table <int> test2;
    test2.add(5,8);
    test2.add(3, 7);
    test2.add(9, 0);
    int i;
    for(i = 0; i<3;i++)
        cout<<test2.getvalue(i)<< "\n";
    cout<<"all "<<test2.count();
    test2.deletekey(7);
    cout<<"del\n";
    for(i = 0; i<2;i++)
        cout<<test2.getvalue(i)<< "\n";
    cout<<"after "<<test2.count();
    test2.deleteall();
    cout<<"\nall del "<<test2.count();
    /*char *c = test[5];
    if (c == NULL) cout<<"\nnull";
    else cout<<*c;*/
    Iterator <char> iter = test.getbegin_iter();
    test.add('d',7);
    cout<<"now iter on ";
    cout<<"now iter on "<<iter.getvalue();
    ++iter;
    cout<<"now iter on "<<iter.getvalue();
    return 0;
}

