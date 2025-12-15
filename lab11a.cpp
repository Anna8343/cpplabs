#include <iostream>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date time;
    int addMinutes;

    cin >> time.hours;
    cin >> time.minutes;
    cin >> addMinutes;


    if (time.hours < 0 || time.hours > 23 || time.minutes < 0 || time.minutes > 59) {
        cout << "Incorrect time";
        return 0;
    }

    int totalMinutes = time.hours * 60 + time.minutes + addMinutes;

    totalMinutes %= (24 * 60);
    time.hours = totalMinutes / 60;
    time.minutes = totalMinutes % 60;

    cout << time.hours << ":";
    if (time.minutes < 10)
        cout << "0";
    cout << time.minutes;

    return 0;
}
