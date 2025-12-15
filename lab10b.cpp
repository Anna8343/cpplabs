#include <iostream>
using namespace std;

int main() {
    int a[6][4];

    cout << "Enter elements of the array:\n";
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];

    for (int j = 0; j < 4; j++) {
        int count = 0;
        for (int i = 0; i < 6; i++) {
            if (a[i][j] % 2 == 0)
                count++;
        }
        cout << "Column " << j << ": " << count << " even numbers\n";
    }

    return 0;
}
