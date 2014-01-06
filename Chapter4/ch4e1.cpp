#include <iostream>

using namespace std;

int main()
{
    char firstName[20];
    char lastName[20];
    char grade;
    int age;
    char newGrade;

// Gather input
    cout << "What is your first name? ";
    cin.getline(firstName, 20);
    cout << "What is your last name? ";
    cin >> lastName;
    cout << "What is the letter grade you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

// Increment grade and recognize upper and lowercase input.
    if (grade == 'A' || grade == 'a')
    {
        newGrade = 'B';
    }
    else if (grade == 'B' || grade == 'b')
    {
        newGrade = 'C';
    }
    else if (grade == 'C' || grade == 'c')
    {
        newGrade = 'D';
    }

    cout << "name: " << firstName << " " << lastName << endl;
    cout << "grade: " << char (newGrade) << endl;
    cout << "age: " << age << endl;

    cin.get();
    return 0;
}
