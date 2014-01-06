#include <iostream>

using namespace std;

void time(int, int);
int hours;
int minutes;

int main()
{
    cout << "Enter a number of hours: ";
    cin >> hours;

    cout << "Enter number of minutes: ";
    cin >> minutes;

    time(hours, minutes);
    cin.ignore();

    return 0;
}

void time(int hours, int minutes)
{
    cout << "Time: " << hours << ":" <<  minutes << endl;
}
