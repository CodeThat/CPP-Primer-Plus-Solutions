#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int words = 0;
    string compare= "done";

    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> input;

    while(input != compare)
    {
        cin >> input;
        words++;
    };

    cout << "You entered a total of " << words << " words " << endl;

    cin.get();
    return 0;
}
