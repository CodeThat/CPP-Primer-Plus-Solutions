#include <iostream>

using namespace std;

int main()
{
    int rows = 0;
    int less = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=0; i < rows; i++)
    {
        for(int d=0; d < (rows - less); d++)
            cout << ".";
        for(int a=0; a < less; a++)
            cout << "*";

        cout << endl;
        less++;
    }
    return 0;
}
