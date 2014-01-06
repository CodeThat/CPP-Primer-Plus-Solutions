#include <iostream>

using namespace std;

int factorial(int number);

int main()
{
    int number;
    while(number != -1)
    {
        cout << "Enter a number to find it's factorial (q to quit): ";
        cin >> number;
        if(!cin.good())
            break;
        else
        {
            int factor;
            factor = factorial(number);
            cout << "Factorial " << number << " is " << factor << endl;
        }
    }
    return 0;
}

int factorial(int number)
{
    if(number == 0)
        return 1;
    return number * factorial(number - 1);
}
