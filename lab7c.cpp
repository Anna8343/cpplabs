#include <iostream>
using namespace std;

int main(void) {
    int n;
    const int MAX_SIZE = 50;   =

    cout << "Enter side size: ";
    cin >> n;

    if (n <= 1) {
        cout << "Sorry, the side size must be greater than 1" << endl;
        return 0;
    }

    if (n > MAX_SIZE) {
        cout << "Sorry, the side size is too big" << endl;
        return 0;
    }

    cout << '+';
    for (int i = 0; i < n - 2; i++)
        cout << '-';
    cout << '+' << endl;

    for (int i = 0; i < n - 2; i++) {
        cout << '|';
        for (int j = 0; j < n - 2; j++)
            cout << ' ';
        cout << '|' << endl;
    }

    cout << '+';
    for (int i = 0; i < n - 2; i++)
        cout << '-';
    cout << '+' << endl;

    return 0;
}
