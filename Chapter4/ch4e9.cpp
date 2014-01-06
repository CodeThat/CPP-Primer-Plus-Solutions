#include <iostream>
#include <string>

using namespace std;

// Candy bar structure
struct candyBar
{
    string brand;
    double weight;
    int calories;
};

int main()
{
// create three members, but use new to allocate
    candyBar * bar = new candyBar[3];

    bar[0].brand = "Crunch";
    bar[0].weight = 1.7;
    bar[0].calories = 275;

    bar[1].brand = "Heath";
    bar[1].weight = 2.3;
    bar[1].calories = 400;

    bar[2].brand = "Rolo";
    bar[2].weight = 2.5;
    bar[2].calories = 350;

// Ouput bars
    cout << "The first bar variable holds: \n";
    cout << bar[0].brand << "\n";
    cout << bar[0].weight << " ounces \n";
    cout << bar[0].calories << " calories \n";
    cout << endl;

    cout << "The second bar variable holds: \n";
    cout << bar[1].brand << "\n";
    cout << bar[1].weight << " ounces \n";
    cout << bar[1].calories << " calories \n";
    cout << endl;

    cout << "The third bar variable holds: \n";
    cout << bar[2].brand << "\n";
    cout << bar[2].weight << " ounces \n";
    cout << bar[2].calories << " calories \n";

    delete [] bar; // free memory
    cin.get();
    return 0;
}
