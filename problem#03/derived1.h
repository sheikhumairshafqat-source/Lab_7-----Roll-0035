#ifndef DERIVED1_H
#define DERIVED1_H

#include "Base.h"

class Derived1 : public Base {
private:
    int data2;
public:
    Derived1(int a, int b);
    Derived1(const Derived1& other);             
    Derived1& operator=(const Derived1& other);  
    ~Derived1();
    void print();
};

#endif
