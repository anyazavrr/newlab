#ifndef ENTERY_H
#define ENTERY_H

template <typename T>
class entery
{
    int key;
    T value;
public:
    entery(const T &examp, int key2);
    T getvalue() const;
    int getkey() const;
};

#endif // ENTERY_H
