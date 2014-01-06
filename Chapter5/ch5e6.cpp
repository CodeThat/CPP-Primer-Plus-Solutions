#include <iostream>
#include <string>

using namespace std;

// create car struct
struct car
{
    string make;
    int yearBuilt;
};

int main()
{
    int cars;

    cout << "How many cars do you wish to catalog? ";
    cin >> cars;
    cout << "\n";

// create dynmaic array with new
    car * dynamicArray = new car[cars];

// iterate through our dynamic array
    for(int i = 0; i < cars; i++)
    {
        cout << "For car #" << i+1 << endl;
        cout << "Please enter the make: ";
        cin >> dynamicArray[i].make;
        cout << "Please enter the year made: ";
        cin >> dynamicArray[i].yearBuilt;
    }

// output our collection
    cout << "Here is what is in your collection:" << endl;
    for(int i = 0; i < cars; i++)
        cout << dynamicArray[i].yearBuilt << " " << dynamicArray[i].make << endl;

// clean
    delete [] dynamicArray;

    return 0;
}
