#include <iostream>
#include "Derived1.h"
using namespace std;

Derived1::Derived1(int a, int b) : Base(a) {
    data2 = b;
    cout << "Derived1 Parameterized Constructor" << endl;
}

Derived1::Derived1(const Derived1& other) : Base(other) {
    data2 = other.data2;
    cout << "Derived1 Copy Constructor" << endl;
}

Derived1& Derived1::operator=(const Derived1& other) {
    cout << "Derived1 Assignment Operator" << endl;
    if (this != &other) {
        Base::operator=(other); 
        data2 = other.data2;
    }
    return *this;
}

Derived1::~Derived1() {
    cout << "Derived1 Destructor" << endl;
}

void Derived1::print() {
    Base::print();
    cout << "Derived1::print() -> data2 = " << data2 << endl;
}
