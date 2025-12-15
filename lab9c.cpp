#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int a[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = a[0], secondMax = a[1];

    if (secondMax > max) {
        int temp = max;
        max = secondMax;
        secondMax = temp;
    }

    for (int i = 2; i < n; i++) {
        if (a[i] > max) {
            secondMax = max;
            max = a[i];
        } else if (a[i] > secondMax) {
            secondMax = a[i];
        }
    }

    cout << "Second largest element: " << secondMax;

    return 0;
}
