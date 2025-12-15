#include <iostream>
using namespace std;

int main() {
    int a[4][7];

    cout << "Enter elements of the array:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 7; j++)
            cin >> a[i][j];

    int min = a[0][0];
    int row = 0, col = 0;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 7; j++)
            if (a[i][j] < min) {
                min = a[i][j];
                row = i;
                col = j;
            }

    cout << "Min element = " << min << endl;
    cout << "Row = " << row << ", Column = " << col << endl;

    return 0;
}
