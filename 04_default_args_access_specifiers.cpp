// Default arguments and access specifiers
#include <iostream>
using namespace std;

class Box {
private:
    int length;      // accessible only inside the class
protected:
    int breadth;     // accessible in class and derived classes
public:
    int height;      // accessible everywhere

    // default arguments
    Box(int l = 1, int b = 1, int h = 1) {
        length = l;
        breadth = b;
        height = h;
    }
    int volume() { return length * breadth * height; }
};

int add(int a, int b = 10, int c = 20) {
    return a + b + c;
}

int main() {
    cout << "add(1)       = " << add(1) << endl;
    cout << "add(1, 2)    = " << add(1, 2) << endl;
    cout << "add(1, 2, 3) = " << add(1, 2, 3) << endl;

    Box b1;
    Box b2(2, 3);
    Box b3(2, 3, 4);
    cout << "Volume b1 = " << b1.volume() << endl;
    cout << "Volume b2 = " << b2.volume() << endl;
    cout << "Volume b3 = " << b3.volume() << endl;
    cout << "Public member height of b3 = " << b3.height << endl;
    // b3.length = 5;  // Error: length is private
    return 0;
}
