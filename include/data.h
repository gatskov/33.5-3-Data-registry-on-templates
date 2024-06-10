#ifndef DATA_H
#define DATA_H
#include <iostream>

template <typename KeyType, typename ValueType>
struct Data
{
public:
    KeyType key;
    ValueType value;

    Data(){};
    Data(KeyType key, ValueType value) : key(key), value(value){};
};

#endif