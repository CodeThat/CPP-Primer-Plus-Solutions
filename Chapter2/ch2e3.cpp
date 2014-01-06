#include <iostream>

using namespace std;

void twoTimes();
void twice();

int main()
{
    twoTimes();
    twoTimes();
    twice();
    twice();

    cin.ignore();
    return 0;
}

void twoTimes()
{
    cout << "Three blind mice" << endl;
}

void twice()
{
    cout << "See how they run" << endl;
}
