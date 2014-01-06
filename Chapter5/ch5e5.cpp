#include <iostream>
#include <string>

using namespace std;

int main()
{
    string month[12] = {"January","February ","March ","April ","May","June","July","August","September","October","November","December"};
    int sales[3][12];
    int yearTotal;
    int sum = 0;
    int total = 0;
    int everything = 0;

    cout << "Enter sales for the month: " << endl;

    for(int y = 0; y < 3; y++)
    {
        for(int m = 0; m < 12; m++)
        {
            cout << month[m] << ": ";
            cin >> sales[y][m];
            sum=sum+sales[y][m];
            total=sum;

        }

    }

    for(int y = 0; y < 3; y++)
    {
        yearTotal = 0;
        for(int m =0; m < 12; m++)
        {
            cout << month[m] << sales[y][m] << endl;
            yearTotal+=sales[y][m];
            everything+=sales[y][m];
        }

        cout << "Sales for this year: " << yearTotal << endl;
    }

    cout << "The data for all years: " << everything << endl;

    return 0;
}
