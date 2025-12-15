#include <iostream>
using namespace std;

int main() {
    int a[4][6];

    cout << "Enter elements of the array:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            cin >> a[i][j];

    for (int j = 0; j < 6; j++) {
        int sum = 0;
        for (int i = 0; i < 4; i++)
            sum += a[i][j];

        cout << "Sum of column " << j << " = " << sum << endl;
    }

    return 0;
}
