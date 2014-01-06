#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int c = 0;

    cout << "Enter 1st integer, lower";
    cin >> a;
    cout << "Enter 2nd integer, higher: ";
    cin >> b;

    for(int n = a; n = b; n++)
        c = c+n;

    cout << "The sum of all numbers between" << a << "and" << b << "is: " <<  c << endl;

    cin.get();
    return 0;
}
