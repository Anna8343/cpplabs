#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter a natural number: ";
    cin >> N;

    int product = 1;
    bool hasEven = false;

    while (N > 0) {
        int digit = N % 10;

        if (digit % 2 == 0 && digit != 0) {
            product *= digit;
            hasEven = true;
        }

        N /= 10;
    }

    if (hasEven) {
        cout << "Product of even digits = " << product;
    } else {
        cout << "No even digits";
    }

    return 0;
}
