#include <iostream>

using namespace std;

void showMenu();
void carnivore();
void tree();
void pianist();
void game();

int main()
{
    char choice;

    showMenu();
    cin >> choice;
    while(choice != 'Q' && choice != 'q')
    {
        switch(choice)
        {
        case 'C':
        case 'c':
            carnivore();
            break;
        case 'P':
        case 'p':
            pianist();
            break;
        case 'T':
        case 't':
            tree();
            break;
        case 'G':
        case 'g':
            game();
            break;
        default:
            cout << "That is not a choice!\n";
        }
        showMenu();
        cin >> choice;
    }
    return 0;
}

void showMenu()
{
    cout << "Please enter one of the following choices: \n\n";
    cout << "c) carnivore p) pianist\n";
    cout << "t) tree      g) game\n";
    cout << "q) quit\n";
    cout << "\n";
}

void carnivore()
{
    cout << "Rawr, you have selected carnivore!\n";
}

void tree()
{
    cout << "Behold, a tree has spawned!\n";
}

void pianist()
{
    cout << "Is this Beethoven?\n";
}

void game()
{
    cout << "Shall we play a game?\n";
}
