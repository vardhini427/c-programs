// Coding practice: First n Fibonacci numbers
#include <iostream>
using namespace std;

int main() {
    int n;
    long long a = 0, b = 1;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
