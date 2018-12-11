#ifndef ENTERY_H
#define ENTERY_H

template <typename T , typename K>
class entery
{
    K key;
    T value;
public:
    entery(const T &examp, K key2);
    T getvalue() const;
    K getkey() const;
    bool operator ==( entery<T,K> &other)
    {
        if(key == other.key && value == other.value)
            return true;
        else return false;
    }
};

#endif // ENTERY_H
