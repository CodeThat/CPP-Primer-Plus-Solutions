#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

struct contrib
{
    string name;
    double amount;
};

int main()
{
// Create input stream
    ifstream inFile;
    inFile.open("contrib.txt");

// faile-safe
    if (!inFile.is_open())
    {
        cout << "Failed to open: " << inFile << endl;
        exit(EXIT_FAILURE);
    }

    int numDonors = 0;
    int patrons = 0;
    int grandPatrons = 0;
    char lineOne;

    cout << "Society for the Preservation of Rightful Influence" << "\n\n";
    cout << "Reading File...\n";

    (inFile >> lineOne).get();
    if(!isdigit(lineOne))
    {
        cout << "Number of donors not found\n";
        return 2;
    }
    else
        cout << "The number of donors is: " << lineOne << "\n\n";

    numDonors = atoi(&lineOne);

    contrib *society = new contrib[numDonors];

// Gather names and amounts
    for(int i = 0; i < numDonors; i++)
    {
        getline(inFile, society[i].name); // getline to grab names
        cout << "Donor # " << (i+1) << " " << society[i].name << endl;
        (inFile >> society[i].amount).get();
        /*inFile >> society[i].amount;*/
        cout << "Amount: " << (i+1) << society[i].amount<< endl;
    }

    cout << "\n";
// Display donors over 10000
    cout << "Grand Patrons: \n";
    for(int x = 0; x < numDonors; x++)
    {
        if(society[x].amount >= 10000)
        {
            cout << society[x].name << " Donated: "
                 << "$ " << society[x].amount << "\n";
            grandPatrons = 1;
        }
    }
    if(grandPatrons == 0)
        cout << "none\n";

    cout << "\n";

// Display all other patrons

    cout << "Patrons list: \n";
    for(int y = 0; y < numDonors; y++)
    {
        if(society[y].amount < 10000)
        {
            cout << society[y].name << " Donated: "
                 << "$ " << society[y].amount << "\n";
            patrons = 1;
        }
    }
    if(patrons == 0)
        cout << "none\n";
    delete [] society;

    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";

// free memory
    inFile.close();

    return 0;
}
