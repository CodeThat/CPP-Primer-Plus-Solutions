#include <iostream>

using namespace std;

float convert(float);
float celsius;

int main()
{
    cout << "Please enter a celsius temperature: ";
    cin >> celsius;

    cout << celsius << " degrees celsius is " << convert(celsius) << " degrees fahrenheit" << endl;
    cin.ignore();

    return 0;
}

float convert(float celsius)
{
    return (celsius * 1.8) + 32.0;
}
