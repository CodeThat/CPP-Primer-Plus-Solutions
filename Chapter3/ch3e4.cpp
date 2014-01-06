#include <iostream>

using namespace std;

// Required constants as per text, sort of
const int day = 86400;
const int hour = 3600;
const int minute = 60;

int main()
{

    long seconds;
    int days, minutes, hours, secondsLeft;

    cout << "Enter the number of seconds: ";
    cin >> seconds;

// Convert seconds to respective units
    days = seconds / day;
    hours = (seconds % day) / hour;
    minutes = (seconds - days * day - hours * hour) / minute;
    secondsLeft = seconds - days * day - hours * hour - minutes * minute;

    cout << seconds << " Seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, "
         << secondsLeft << " seconds" << endl;

    cin.get();
    return 0;
}
