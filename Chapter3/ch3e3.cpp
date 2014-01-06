#include <iostream>

using namespace std;

int main()
{

    int degrees;
    int minutes;
    int seconds;

// Gather input
    cout << "Enter your latitude in degrees, minutes, and seconds: " << endl;
    cout << "Enter your degrees: ";
    cin >> degrees;
    cout << "Enter your minutes of arc: ";
    cin >> minutes;
    cout << "Enter your seconds of arc: ";
    cin >> seconds;
    cout << degrees << " degrees, " << minutes << " minutes " << seconds << " seconds = ";

// Calculate
    float latitude = float (degrees) + ( float (minutes) +  float (seconds)/60)/60;
    cout << latitude << " degrees." << endl;

    cin.get();
    return 0;
}
