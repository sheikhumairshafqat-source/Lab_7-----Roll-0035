#include <iostream>
#include "Base.h"
using namespace std;

Base::Base(int a) {
    data1 = a;
    cout << "Base Parameterized Constructor" << endl;
}

Base::~Base() {
    cout << "Base Destructor" << endl;
}

void Base::print() {
    cout << "Base::print() -> data1 = " << data1 << endl;
}
