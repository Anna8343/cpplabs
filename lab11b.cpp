#include <iostream>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date start, end;

    cin >> start.hours >> start.minutes;
    cin >> end.hours >> end.minutes;

 
    if (start.hours < 0 || start.hours > 23 || start.minutes < 0 || start.minutes > 59 ||
        end.hours < 0 || end.hours > 23 || end.minutes < 0 || end.minutes > 59) {
        cout << "Incorrect time";
        return 0;
    }

    int startTotal = start.hours * 60 + start.minutes;
    int endTotal = end.hours * 60 + end.minutes;

    if (endTotal < startTotal) {
        endTotal += 24 * 60;
    }

    int duration = endTotal - startTotal;

    int hours = duration / 60;
    int minutes = duration % 60;

    cout << hours << ":";
    if (minutes < 10)
        cout << "0";
    cout << minutes;

    return 0;
}
