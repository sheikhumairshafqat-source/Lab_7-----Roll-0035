#ifndef DERIVED1_H
#define DERIVED1_H
#include<iostream>
using namespace std;
#include "Base.h"

class Derived1 : public Base {
private:
    int data2{};
public:
    Derived1();
    ~Derived1();
};

#endif
