#include <iostream>
using namespace std;

int main() {
    int n, A;
    cout << "Enter array size: ";
    cin >> n;

    int a[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter number A: ";
    cin >> A;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > A) {
            count++;
        }
    }

    cout << "Count of elements greater than A: " << count;

    return 0;
}
