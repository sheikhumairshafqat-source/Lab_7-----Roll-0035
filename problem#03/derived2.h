#ifndef DERIVED2_H
#define DERIVED2_H

#include "Derived1.h"

class Derived2 : public Derived1 {
private:
    int data3;
public:
    Derived2(int a, int b, int c);
    Derived2(const Derived2& other);             
    Derived2& operator=(const Derived2& other);  
    ~Derived2();
    void setValue(int x);                        
    void print();
};

#endif
