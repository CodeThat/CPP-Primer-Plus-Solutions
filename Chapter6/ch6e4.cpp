#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Benevolent Order of Programmers name structure
struct bop
{
    char fullname[40]; // real name
    char title[40]; // job title
    char bopname[40]; // secret BOP name
    int preference; // 0 = fullname, 1 = title, 2 = bopname
};

void showMenu();

int main()
{
// Initialize struct array
    bop programmer[5]=
    {
        "Cameron Anglin", "Senior Developer", "rundata", 1,
        "Bill Gates", "Quality Assurance", "Bill77", 2,
        "Larry Wall", "Debugger", "LW", 0,
        "Fusajiro Yamauchi", "Game Tester", "Yoshi", 1,
        "Bjarne Stroustrup", "The Creator", "C++", 0
    };

    showMenu();
    char choice;

    do
    {
        cin >> choice;
        choice = tolower(choice);
        if (choice != 'a' && choice != 'b' && choice !='c' && choice !='d')
            continue;
        else for(int i = 0; i < 5; i++)
            {
                switch(choice)
                {
                case 'a':
                    cout << programmer[i].fullname << "\n";
                    break;
                case 'b':
                    cout << programmer[i].title << "\n";
                    break;
                case 'c':
                    cout << programmer[i].bopname << "\n";
                    break;
                case 'd':
                    switch(programmer[i].preference)
                    {
                    case 0:
                        cout << programmer[i].fullname << "\n";
                        break;
                    case 1:
                        cout << programmer[i].title << "\n";
                        break;
                    case 2:
                        cout << programmer[i].bopname << "\n";
                        break;
                    }
                }
            }
        cout << "\n";
        showMenu();
    }
    while(choice != 'Q' && choice != 'q');

    cout << "Bye!\n";
    return 0;
}

void showMenu()
{
    cout << "Benevolent Order of Programmers Report\n";
    cout <<    "a. display by name      b. display by title\n";
    cout <<    "c. display by bopname   d. display by preference\n";
    cout <<    "q. quit\n\n";
    cout << "Enter your choice: \n";
}
