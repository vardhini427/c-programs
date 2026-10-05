// Virtual functions (runtime polymorphism)
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base class show()" << endl; }
    void display() { cout << "Base class display() (non-virtual)" << endl; }
    virtual ~Base() { cout << "Base destructor" << endl; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived class show()" << endl; }
    void display() { cout << "Derived class display()" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
};

int main() {
    Base *ptr;
    Derived d;

    ptr = &d;
    ptr->show();      // virtual: calls Derived version
    ptr->display();   // non-virtual: calls Base version

    cout << "--- virtual destructor demo ---" << endl;
    Base *p2 = new Derived();
    delete p2;        // calls both destructors because destructor is virtual
    return 0;
}
