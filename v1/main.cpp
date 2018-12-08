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
    test.add('s', hash("UAA"));
    test.add('d', 7);
    test.add('a', 9);
    char* c = test[7];
    cout<<*c;
    Iterator<char> iter = test.getbegin_iter();
    cout<<"\n"<<iter.getvalue()<<"\n";
    ++iter;
    cout<<iter.getvalue()<<"\n";
    ++iter;
    cout<<iter.getvalue()<<"\n";
    ++iter;
    cout<<iter.getvalue()<<"\n";
    Iterator<char> it = test.getend_iter();
    cout<<it.getvalue()<<"\n";


    ifstream file;
    file.open("1.txt");
    table<char> test2;
    file>>test2;
    cout<<test2.getvalue(0)<<"\n";
    Iterator<char> iter2 = test2.getbegin_iter();
    cout<<"\n"<<iter2.getvalue()<<"\n";
    ++iter2;
    cout<<iter2.getvalue()<<"\n";
    ++iter2;
    cout<<iter2.getvalue()<<"\n";
    ++iter2;
    cout<<iter2.getvalue()<<"\n";
    file.close();

    ofstream file2;
    file2.open("2.txt");
    file2<<test2;
    file2.close();

    ifstream file3;
    file3.open("2.txt");
    table<char> test3;
    file3>>test3;
    Iterator<char> iter3 = test3.getbegin_iter();
    cout<<"\n"<<iter3.getvalue()<<"\n";
    ++iter3;
    cout<<iter3.getvalue()<<"\n";
    ++iter3;
    cout<<iter3.getvalue()<<"\n";
    ++iter3;
    cout<<iter3.getvalue()<<"\n";

    Iterator<char> iter4 = test3.getbegin_iter();
    cout<<"\n"<<iter4.getvalue()<<"\n";
    ++iter4;
    cout<<iter4.getvalue()<<"\n";
    ++iter4;
    cout<<iter4.getvalue()<<"\n";
    ++iter4;
    cout<<iter4.getvalue()<<"\n";

    /*table<char> test4(test);
    Iterator<char> iter4 = test4.getbegin_iter();
    cout<<"�����\n";
    cout<<"\n"<<iter4.getvalue()<<"\n";
    ++iter4;
    cout<<iter4.getvalue()<<"\n";
    ++iter4;
    cout<<iter4.getvalue()<<"\n";
    ++iter4;
    cout<<iter4.getvalue()<<"\n";
    /*if(test2 == test3)
        cout<<"��������� �����\n";
    else
    {
         cout<<"��������� �� �����\n";
    }*/

    return 0;
}

