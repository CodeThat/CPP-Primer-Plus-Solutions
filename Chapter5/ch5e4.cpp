#include <iostream>
#include <string>

using namespace std;

int main()
{
    string month[12] = {"January","February ","March ","April ","May","June","July","August","September","October","November","December"};
    int sales[12];
    int sum = 0;

    cout << "Enter sales for the month: " << endl;

    for(int i = 0; i < 12; i++)
    {
        cout << month[i] << ": ";
        cin >> sales[i];
        sum=sum+sales[i];
    };

    cout << "Total sales for the year: " << sum << endl;

    return 0;
}
