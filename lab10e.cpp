#include <iostream>
using namespace std;

int main() {
    int a[3][4];

    cout << "Enter elements of the array:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];

    int max = a[0][0];
    int row = 0, col = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            if (a[i][j] > max) {
                max = a[i][j];
                row = i;
                col = j;
            }

    cout << "Max element = " << max << endl;
    cout << "Row = " << row << ", Column = " << col << endl;

    return 0;
}
