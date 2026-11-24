#include <iostream>
#include "Derived2.h"
using namespace std;

Derived2::Derived2(int a, int b, int c) : Derived1(a, b) {
    data3 = c;
    cout << "Derived2 Parameterized Constructor" << endl;
}

Derived2::Derived2(const Derived2& other) : Derived1(other) {
    data3 = other.data3;
    cout << "Derived2 Copy Constructor" << endl;
}

Derived2& Derived2::operator=(const Derived2& other) {
    cout << "Derived2 Assignment Operator" << endl;
    if (this != &other) {
        Derived1::operator=(other); 
        data3 = other.data3;
    }
    return *this;
}

Derived2::~Derived2() {
    cout << "Derived2 Destructor" << endl;
}

void Derived2::setValue(int x) {
    cout << "Derived2::setValue()" << endl;
    data3 = x;
}

void Derived2::print() {
    Derived1::print();
    cout << "Derived2::print() -> data3 = " << data3 << endl;
}
