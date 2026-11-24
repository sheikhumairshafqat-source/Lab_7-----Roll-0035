#include "Derived1.h"

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

ostream& operator<<(ostream& out, const Derived1& d1) {
    out << static_cast<const Base&>(d1); // Parent (Base) ka operator<< call karne ke liye
    out << "\nDerived1::operator<<() -> data2 = " << d1.data2;
    return out;
}
