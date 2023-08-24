#include <iostream>
using namespace std;

int main() {
    int hour;
    int min;
    int time = 0;

    cin >> hour >> min;

    time = 60 * hour + min - 45;

    //if (hour == 0 && min == 0) {
    //    hour = 23;
    //    time = 60 * hour + min + 15;
    //}

    if (hour == 0 && min < 45) {
        hour = 23;
        time = 60 * hour + min + 15;
    }
    cout << time / 60 << " " << time % 60;
}