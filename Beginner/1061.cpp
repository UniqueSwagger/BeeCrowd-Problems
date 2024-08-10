#include <iostream>
#include <iomanip>
using namespace std;

long long convertToSeconds(int day, int hour, int minute, int second) {
    return day * 24 * 3600 + hour * 3600 + minute * 60 + second;
}

int main() {
    int day1, hour1, minute1, second1;
    int day2, hour2, minute2, second2;

    cin >> ws; // To ignore any leading whitespace
    string ignore; // To ignore "Dia"
    cin >> ignore >> day1 ;
    cin >> hour1 >> ws >> ignore >> minute1 >> ws >> ignore >> second1;

    cin >> ws;
    cin >> ignore >> day2 ;
    cin >> hour2 >> ws >> ignore >> minute2 >> ws >> ignore >> second2;

    // Convert both timestamps to total seconds
    long long time1 = convertToSeconds(day1, hour1, minute1, second1);
    long long time2 = convertToSeconds(day2, hour2, minute2, second2);

    // Calculate the difference in seconds
    long long diffSeconds = time2 - time1;

    // Convert the difference back to days, hours, minutes, and seconds
    int days = diffSeconds / (24 * 3600);
    diffSeconds %= (24 * 3600);
    int hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    int minutes = diffSeconds / 60;
    int seconds = diffSeconds % 60;

    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}
