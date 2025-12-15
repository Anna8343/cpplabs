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

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            cout << "First zero element index: " << i;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Array does not contain zero elements";
    }

    return 0;
}
