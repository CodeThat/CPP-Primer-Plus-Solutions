#include <iostream>

using namespace std;

int main()
{
    double tvarp = 0.0;
    double tax;

    do
    {
        cout << "Enter Tvarps earned this year: \n";
        if(tvarp < 0 || !(cin >> tvarp))
        {
            cout << "Invalid input, non-negative numbers only!\n";
            cin.clear();
        }
        else if (tvarp > 5000 && tvarp <= 15000)
            tax = 5000*0 + (tvarp - 5000)*0.10;
        else if (tvarp > 15000 && tvarp <= 35000)
            tax = 5000*0 + 10000*0.10 + (tvarp - 15000)*0.15;
        else if (tvarp > 35000)
            tax = 5000*0 + 10000*0.10 + 20000*0.15 + (tvarp - 35000)*0.20;
        else tax = 0;

        cout << "Your tax is: " << tax << endl;
    }
    while(tvarp <= 0);

    return 0;
}
