#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char firstName[20];
    char lastName[20];
    char str[50];

// Gather input
    cout << "Enter your first name: ";
    cin >> firstName;
    cin.ignore();
    cout << "Enter your last name: ";
    cin >> lastName;

// C string member functions
    strcpy_s(str, lastName);
    strcat_s(str, " , ");
    strcat_s(str, firstName);

    cout << "Here's the information in a single string: " << str << endl;

    cin.get();
    return 0;
}
