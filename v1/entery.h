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
            return (key == other.key && value == other.value);
    }
};

#endif // ENTERY_H
