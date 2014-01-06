#include <iostream>

using namespace std;

const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void reverse_array(double ar[], int n);

int main()
{
    double properties[Max];
    int size = fill_array(properties, Max);
    cout << endl;
    show_array(properties, size);
    cout << endl;
    reverse_array(properties, size);
    show_array(properties, size);
    cout << endl;
    reverse_array(properties + 1, size -2);
    show_array(properties, size);
    return 0;
}

int fill_array(double ar[], int limit)
{
    double temp;
    int i;
    for(i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated" << endl;
            break;
        }
        else if(temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": ";
        cout << ar[i] << endl;
    }
}

void reverse_array(double ar[], int n)
{
    double temp;
    for(int i = 0; i < n/2; i++)
    {
        temp = ar[i];
        ar[i] = ar[n - i - 1];
        ar[n - i - 1] = temp;
    }
}
