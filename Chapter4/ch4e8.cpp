#include <iostream>
#include <string>

using namespace std;

// pizza struct
struct pizza
{
    string pizzaCompanyName;
    int pizzaDiameter;
    int pizzaWeight;
};

int main()
{

// "New" keyword used to allocate memory for the structure
    pizza * pie = new pizza;

// Gather info
    cout << "Enter the diameter of the pizza in inches: ";
    (cin >> pie->pizzaDiameter).get(); // manipulate cin
    cout << "Enter the name of the Pizza Company: ";
    getline(cin, pie->pizzaCompanyName);
    cout << "Enter the weight of the pizza in ounces: ";
    cin >> (*pie).pizzaWeight; // Another method of pointing to a structure
    cout << "\n";

// Output info
    cout << "The pizza company name is: " << pie->pizzaCompanyName << endl;
    cout << "The Diameter inches is: " << pie->pizzaDiameter << endl;
    cout << "The weight in ounces is: " << pie->pizzaWeight << endl;

// Free memory used by our structure, important.
    delete pie;

    cin.get();
    return 0;
}
