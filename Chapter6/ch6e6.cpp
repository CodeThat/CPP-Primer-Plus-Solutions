#include <iostream>
#include <string>

using namespace std;

struct contrib
{
    string name;
    double amount;
};

int main()
{
    int numDonors = 0;
    int patrons = 0;
    int grandPatrons = 0;

    cout << "Society for the Preservation of Rightful Influence" << "\n\n";

    cout << "Enter number of contributors: ";
    cin >> numDonors;
    cout << "\n";

    contrib *society = new contrib[numDonors];

// Gather names and amounts
    for(int i = 0; i < numDonors; i++)
    {
        cout << "Enter the name of the contributor: ";
        cin >> society[i].name;
        cout << "Enter the contribution anount: ";
        cin >> society[i].amount;
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

// free memory
    delete [] society;

    return 0;
}
