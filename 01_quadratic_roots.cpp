// Find the roots of a quadratic equation
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Not a quadratic equation" << endl;
        return 0;
    }
    double d = b * b - 4 * a * c;
    if (d > 0) {
        cout << "Real and different roots: "
             << (-b + sqrt(d)) / (2 * a) << " and "
             << (-b - sqrt(d)) / (2 * a) << endl;
    } else if (d == 0) {
        cout << "Real and equal roots: " << -b / (2 * a) << endl;
    } else {
        cout << "Complex roots: " << -b / (2 * a) << " + "
             << sqrt(-d) / (2 * a) << "i and "
             << -b / (2 * a) << " - " << sqrt(-d) / (2 * a) << "i" << endl;
    }
    return 0;
}
