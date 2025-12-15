#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int m = 12;
    int arr[m];

    cout << "Enter 12 integer numbers:" << endl;
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }


    sort(arr, arr + m);
    cout << "\nArray sorted in ascending order:" << endl;
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }


    sort(arr, arr + m, greater<int>());
    cout << "\n\nArray sorted in descending order:" << endl;
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
