#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int sumMain = 0, sumSide = 0;

    cout << "Enter elements of the array:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    for (int i = 0; i < 3; i++) {
        sumMain += a[i][i];
        sumSide += a[i][2 - i];
    }

    cout << "Sum of main diagonal = " << sumMain << endl;
    cout << "Sum of side diagonal = " << sumSide << endl;

    return 0;
}
