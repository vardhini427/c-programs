// Class template with multiple parameters
#include <iostream>
using namespace std;

template <class T1, class T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }
    void display() {
        cout << "First = " << first << ", Second = " << second << endl;
    }
};

int main() {
    Pair<int, float> p1(10, 5.5f);
    Pair<string, int> p2("Marks", 95);
    Pair<char, double> p3('A', 9.99);

    p1.display();
    p2.display();
    p3.display();
    return 0;
}
