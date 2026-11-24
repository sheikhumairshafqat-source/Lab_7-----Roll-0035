#include "Base.h"

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

ostream& operator<<(ostream& out, const Base& b) {
    out << "\nBase::operator<<() -> data1 = " << b.data1;
    return out;
}
