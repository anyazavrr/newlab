#include "entery.h"
#include <string>
using namespace std;
template <typename T, typename K>
entery<T,K>::entery(const T &examp, K key2)
{
    value = examp;
    key = key2;
}
template <typename T, typename K>
T entery<T,K>::get_value() const
{
    return value;///some proplem with memory
}
template <typename T, typename K>
K entery<T,K>::get_key() const
{
    return key;
}
template class entery<char, string>;
template class entery<int,string>;
