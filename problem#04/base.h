#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;

class Base {
private:
    int data1;
public:
    Base(int a);
    Base(const Base& other);
    Base& operator=(const Base& other);
    ~Base();
    friend ostream& operator<<(ostream& out, const Base& b);
};

#endif
