#include <iostream>
#include "Derived2.h"
using namespace std;

int main() {
    Derived2 d2(10, 20, 30);
    Derived2 d3 {d2};
    cout << d2 << endl;
    cout << d3 << endl;
    d3.setValue(-12);
    d2 = d3;
    cout << d2 << endl;
    return 0;
}
