#include <iostream>

using namespace std;

int main()
{
    const int feet = 12;
    int inches;

    cout << "Enter your height in inches: " << endl;
    cin >> inches;

    cout << "Your height is " << inches/feet << " and " << inches%feet << " inches" << endl;

    return 0;
}
