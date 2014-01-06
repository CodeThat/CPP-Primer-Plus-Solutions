#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("file.txt");

// Fail-safe
    if (!inFile.is_open())
    {
        cout << "Failed to open: " << inFile << endl;
        cout << "Kthxby" << endl;
        exit(EXIT_FAILURE);
    }

    char letter;
    int count = 0;
    inFile >> letter;
    while (!inFile.eof())
    {
        if (isprint(letter))
            count++;
        inFile >> letter;
    }

    cout << "\n" << "Number of characters is: " << count << endl;

// Check for EOF
    if (inFile.eof())
        cout << "End of file found.\n";
    else if (inFile.fail())
        cout << "Data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";

// Clean
    inFile.close();

    cin.get();

    return 0;
}
