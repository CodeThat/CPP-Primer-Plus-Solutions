#include <iostream>
#include <string>

using namespace std;

struct candyBar
{
    string brand;
    float weight;
    int calories;
};

int main()
{
    candyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "The snack variable holds: \n";
    cout << snack.brand << "\n";
    cout << snack.weight << " ounces \n";
    cout << snack.calories << " calories \n";

    cin.get();
    return 0;
}
