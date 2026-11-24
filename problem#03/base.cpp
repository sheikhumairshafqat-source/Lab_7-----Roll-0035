#include <iostream>
#include "Base.h"
using namespace std;

Base::Base(int a) {
    data1 = a;
    cout << "Base Parameterized Constructor" << endl;
}

Base::Base(const Base& other) {
    data1 = other.data1;
    cout << "Base Copy Constructor" << endl;
}

Base& Base::operator=(const Base& other) {
    cout << "Base Assignment Operator" << endl;
    if (this != &other) {
        data1 = other.data1;
    }
    return *this;
}

Base::~Base() {
    cout << "Base Destructor" << endl;
}

void Base::print() {
    cout << "Base::print() -> data1 = " << data1 << endl;
}
