#include <iostream>
#include "table.h"
#include <iomanip>
#include <assert.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RUS");
    /*table<char> test;
    assert(test.count()==0);
    test.add('a', hash("UUG"));
    assert(test.count()==1);
    test.add('f', hash("UUA"));
    assert(test.count()==2);
    test.add('f', hash("UUA"));
    assert(test.count()==2);
    test.add('l', hash("UUU"));

    assert(test.check_key(hash("UUG"))==true);
    test.deletekey(hash("UAA"));
    assert(test.count()==3);
    test.deletekey(hash("UUA"));
    assert(test.count()==2);
    assert(test.check_key(hash("UUA"))==false);
    bool flag;
    test.deleteall();
    table<char> test1;
    flag = (test == test1);
    assert(flag == true);
    test1.add('w', hash("UGG"));
    assert(*(test1[hash("UGG")]) == 'w');

    table<char> test2(test1);/*
    int i;
    for(i=0;i<test2.count();i++)
    {
        cout<<test2.getvalue(i)<<"\n";
    }*/
    /*assert(test1 == test2);
    test2.add('d', hash("UAG"));
    assert(!(test1 == test2));

    ifstream file;
    file.open("1.txt");
    table<char> test3;
    file>>test3;/*
    for(i=0;i<test3.count();i++)
    {
        cout<<test3.getvalue(i)<<"\n";
    }*/
    //Iterator<char> iter = test3.getbegin_iter();
    /*while(!(iter == test3.getend_iter()))
    {
        cout<<iter.getkey()<<" "<<iter.getvalue()<<"\n";
        i++;
    }*/

    /*file.close();

    ofstream file2;
    file2.open("2.txt");
    file2<<test3;
    file2.close();

    table<char> test4;
    ifstream file3;
    file3.open("2.txt");
    file3>>test4;
    /*Iterator<char> iter1 = test4.getbegin_iter();
    for(i=0; i<test4.count(); ++iter1)
    {
        cout<<iter1.getkey()<<" "<<iter1.getvalue()<<"\n";
        i++;
    }*/
    //assert(test3 == test4);

    return 0;
}

