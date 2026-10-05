// Order of execution of constructors and destructors in inheritance
#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() { cout << "Base1 constructor" << endl; }
    ~Base1() { cout << "Base1 destructor" << endl; }
};

class Base2 {
public:
    Base2() { cout << "Base2 constructor" << endl; }
    ~Base2() { cout << "Base2 destructor" << endl; }
};

class Derived : public Base1, public Base2 {
public:
    Derived() { cout << "Derived constructor" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
};

int main() {
    cout << "Creating object of Derived" << endl;
    Derived d;
    cout << "Leaving main" << endl;
    return 0;
}
// Constructors run: Base classes (in order of inheritance) -> Derived
// Destructors run in reverse order: Derived -> Base classes
