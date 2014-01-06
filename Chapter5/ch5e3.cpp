#include <iostream>

using namespace std;

int main()
{
    int years = 1;
    double DaphneInvestment = 0;
    double CleoInvestment = 0;

    DaphneInvestment = 100 + (100 * 0.10);
    CleoInvestment = 100 + (100 * 0.05);

    while(CleoInvestment < DaphneInvestment)
    {
        DaphneInvestment+=10; // Daphne gets 10 dollars a year.
        CleoInvestment = CleoInvestment + (CleoInvestment * 0.05); // Cleo gets her investment, plus 5%
        years+=1; // increment the year.
    }

    cout << "Daphne's investment value is: " << DaphneInvestment << endl;
    cout << "Cleo's investment value is: " << CleoInvestment << endl;
    cout << "It took " << years << " years for Cleo's investment to exceed Daphne's investment" << endl;

    return 0;
}
