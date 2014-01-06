
#include <iostream>

using namespace std;

double lightyears(double);
double years;

int main()
{
    cout << "Enter number of light years: ";
    cin >> years;

    cout << years << " light years = " << lightyears(years) << " astronomical units" << endl;
    cin.ignore();

    return 0;
}

double lightyears(double years)
{
    return (years * 63240);
}
