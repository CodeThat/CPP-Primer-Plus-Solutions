#include <iostream>

using namespace std;

int main()
{
    int milesDriven;
    int gallonsUsed;
    int mpg;

    cout << "How many miles have you driven: ";
    cin >> milesDriven;
    cout << "How many gallon of gas have you used: ";
    cin >> gallonsUsed;

// Compute here then output
    mpg = milesDriven / gallonsUsed;
    cout << "You are getting " << mpg << " miles per gallon, what a clunker!" << endl;

    cin.get();
    return 0;
}
