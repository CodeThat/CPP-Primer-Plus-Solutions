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

    pizza pie = {pie.pizzaCompanyName, pie.pizzaDiameter, pie.pizzaWeight};

// Gather info
    cout << "Enter the name of the Pizza Company: ";
    getline(cin, pie.pizzaCompanyName);
    cout << "Enter the diameter of the pizza in inches: ";
    cin >> pie.pizzaDiameter;
    cout << "Enter the weight of the pizza in ounces: ";
    cin >> pie.pizzaWeight;
    cout << "\n\n";

// Output info
    cout << "The pizza company name is: " << pie.pizzaCompanyName << endl;
    cout << "The Diameter inches is: " << pie.pizzaDiameter << endl;
    cout << "The weight in ounces is: " << pie.pizzaWeight << endl;

    cin.get();
    return 0;
}
