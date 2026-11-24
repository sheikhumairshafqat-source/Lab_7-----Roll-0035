#include <iostream>
#include "Derived2.h"
using namespace std;

Derived2::Derived2(int a, int b, int c) : Derived1(a, b) {
    data3 = c;
    cout << "Derived2 Parameterized Constructor" << endl;
}

Derived2::~Derived2() {
    cout << "Derived2 Destructor" << endl;
}

void Derived2::print() {
    Derived1::print(); 
    cout << "Derived2::print() -> data3 = " << data3 << endl;
}
