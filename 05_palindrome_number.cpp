// Coding practice: Palindrome number
#include <iostream>
using namespace std;

int main() {
    int n, original, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (original == rev)
        cout << original << " is a palindrome" << endl;
    else
        cout << original << " is not a palindrome" << endl;
    return 0;
}
