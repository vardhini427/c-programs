// Scope resolution operator and namespaces
#include <iostream>
using namespace std;

int x = 100;  // global variable

namespace First {
    int value = 10;
    void show() { cout << "Inside namespace First, value = " << value << endl; }
}

namespace Second {
    int value = 20;
    void show() { cout << "Inside namespace Second, value = " << value << endl; }
}

class Demo {
public:
    void display();
};

// Defining member function outside the class using ::
void Demo::display() {
    cout << "Member function defined outside class using ::" << endl;
}

int main() {
    int x = 5;  // local variable
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;  // scope resolution for global

    First::show();
    Second::show();
    cout << "First::value + Second::value = "
         << First::value + Second::value << endl;

    Demo d;
    d.display();
    return 0;
}
