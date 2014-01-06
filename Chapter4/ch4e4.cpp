#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstName;
    string lastName;
    string str;

// Gather input, could use cin.getline here.
    cout << "Enter your first name: ";
    cin >> firstName;
    cin.ignore();
    cout << "Enter your last name: ";
    cin >> lastName;

// Using C++ string member functions
    str.append(lastName);
    str.append(" , ");
    str.append(firstName);

    cout << "Here's the information in a single string: " << str << endl;

    cin.get();
    return 0;
}
