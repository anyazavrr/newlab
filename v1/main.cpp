#include <iostream>
#include "table.h"
#include <iomanip>
#include <assert.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RUS");
    cout<<"hello";
    table<char,string> test;
    assert(test.count()==0);
    test.add('a',"UUG");
    assert(test.count()==1);
    test.add('f',"UUA");
    assert(test.count()==2);
    test.add('f',"UUA");
    assert(test.count()==2);
    test.add('l',"UUU");

    assert(test.check_key("UUG")==true);
    test.deletekey("UAA");
    assert(test.count()==3);
    test.deletekey("UUA");
    assert(test.count()==2);
    assert(test.check_key("UUA")==false);
    bool flag;
    test.deleteall();
    table<char,string> test1;
    flag = (test == test1);
    assert(flag == true);
    test1.add('w',"UGG");
    assert(*(test1["UGG"]) == 'w');

    table<char,string> test2(test1);
    int i;
    /*for(i=0;i<test2.count();i++)
    {
        cout<<test2.getvalue(i)<<"\n";
    }*/
    assert(test1 == test2);
    test2.add('d',"UAG");
    assert(!(test1 == test2));

    ifstream file;
    file.open("1.txt");
    table<char,string> test3;
    file>>test3;/*
    for(i=0;i<test3.count();i++)
    {
        cout<<test3.getvalue(i)<<"\n";
    }*/
    Iterator<char,string> iter = test3.getbegin_iter();
    //while(!(iter == test3.getend_iter()))
    //{
        cout<<iter.getkey()<<" "<<iter.getvalue()<<"\n";
        ++iter;
        cout<<iter.getkey()<<" "<<iter.getvalue()<<"\n";
         ++iter;
        cout<<iter.getkey()<<" "<<iter.getvalue()<<"\n";
    //}

    file.close();

    ofstream file2;
    file2.open("2.txt");
    file2<<test3;
    file2.close();

    table<char,string> test4;
    ifstream file3;
    file3.open("2.txt");
    file3>>test4;
    Iterator<char,string> iter1 = test4.getbegin_iter();
    for(i=0; i<test4.count(); ++iter1)
    {
        cout<<iter1.getkey()<<" "<<iter1.getvalue()<<"\n";
        i++;
    }
    assert(test3 == test4);

    return 0;
}

