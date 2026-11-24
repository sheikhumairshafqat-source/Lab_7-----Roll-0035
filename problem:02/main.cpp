#include "Derived1.h"
#include "Derived2.h"

int main() {
    Derived1 d1(2, 4);
    Derived2 d2(10, 20, 30);
    d2.print(); 
    return 0;
}
