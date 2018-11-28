#include "table.h"
#include <iostream>
template <typename T>
table<T>::table()
{
    int i;
    for(i = 0;i<=333;i++)
    {
        list[i] = NULL;
    }
}
template <typename T>
table<T>::table(const table &examp)
{
    int i;
    for(i = 0;i<=333;i++)
    {
        list[i] = examp.list[i];
    }

}
template <typename T>
void table<T>::add(string codon)
{
    if(codon.length()==3)
    {
        unsigned int i = hash2(codon);
        char acid;
        int j;
        for(j = 0; j<3;j++)
        {
            codon[j] = toupper(codon[j]);
        }
        cout<<codon;
    }

}
