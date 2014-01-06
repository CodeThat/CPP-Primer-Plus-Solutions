#include <iostream>

using namespace std;

// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks);
long int TotalOdds(int, int, int, int, long double(*p)(unsigned, unsigned));

int main()
{
    cout << "Welcome to the Powerball!\n";
    cout << "Odds of winning are one in " << TotalOdds(47, 5, 27, 1, probability);
    cout << "\nThanks for playing!" << endl;

    return 0;
}
// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0; // here come some local variables
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}

long int TotalOdds(int FirstSet, int x, int PowerBall, int y, long double(*p)(unsigned, unsigned))
{
    long double odds;
    odds = p(FirstSet, x)*p(PowerBall, y);
    return odds;
}
