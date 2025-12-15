#include <iostream>

using namespace std;

int main() {
    const int m = 4;
    const int n = 3;
    int arr[m][n];

    cout << "Enter elements of the 4x3 array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
        cout << "Number of even elements in row " << i << ": " << count << endl;
    }

    return 0;
}
