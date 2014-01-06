#include <iostream>

using namespace std;

float Hmean(int x, int y);

int main()
{
    int myArray[2];

    cout << "Please enter pairs of numbers: " << endl;
    cin >> myArray[0] >> myArray[1];

    if(myArray[0] == 0 || myArray[1] == 0)
    {
        cout << "You have entered a pair matching zero" << endl;
        cout << "Exiting..." << endl;
    }
    else
    {
        cout << "The Harmonic mean of " << myArray[0] << " and "
             << myArray[1] << " is " << Hmean(myArray[0],myArray[1]);
    }
    return 0;
}

float Hmean(int x, int y)
{
    float calc = 2.0 * x * y / (x + y);

    return calc;
}
