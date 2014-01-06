#include iostream;

using namespace std;

const int furlong = 220;
int input;
int distance;

int main()
{
    cout << "Enter number of furlongs: ";
    cin >> input;
    int distance = input * furlong;
    cout << "That is a total of " << distance <<  " yards\n";
    return 0;
}
