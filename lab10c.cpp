#include <iostream>
using namespace std;

int main() {
    int a[5][7];

    cout << "Enter elements of the array:\n";
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 7; j++)
            cin >> a[i][j];

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 7; j++)
            sum += a[i][j];

        cout << "Sum of row " << i << " = " << sum << endl;
    }

    return 0;
}
