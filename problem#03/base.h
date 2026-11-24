#ifndef BASE_H
#define BASE_H

class Base {
private:
    int data1;
public:
    Base(int a);
    Base(const Base& other);             
    Base& operator=(const Base& other); 
    ~Base();
    void print();
};

#endif
