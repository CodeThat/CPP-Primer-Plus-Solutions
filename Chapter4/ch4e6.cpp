#include <iostream>
#include <string>

using namespace std;

// structure
struct candyBar
{
    string brand;
    double weight;
    int calories;
};

int main()
{
// create three members to our struct
    candyBar bar[3] =
    {
        {"Crunch",1.7,275},
        {"Heath",2.3,400},
        {"Rolo",2.5,350}
    };

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

    cin.get();
    return 0;
}
