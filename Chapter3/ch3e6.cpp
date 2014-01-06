#include <iostream>

using namespace std;

int main()
{
    float liters;
    int mpg;

    cout << "Enter the number of European liters per 100 kilometers to convert: ";
    cin >> liters;

// Convert to US mpg
    mpg = 235 / liters;
    cout << liters << " liters " << " is equal to " <<  mpg << " miles per gallon " << endl;

    cin.get();
    return 0;
}
