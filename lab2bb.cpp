#include <iostream>
using namespace std;

int main() {
    double x, y;

    cout << "Enter x and y: ";
    cin >> x >> y;

    if (x >= 0 && x <= 2 && y >= 0 && y <= 1) {
        cout << "The point belongs to the shaded area";
    } else {
        cout << "The point does NOT belong to the shaded area";
    }

    return 0;
}
