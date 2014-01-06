#include <iostream>

const int max = 10;

int main()
{
    double donations[max];

    std::cout << "Enter your donation amounts\n\n";
    std::cout << "Donation #1: ";

    int i = 0;
    while(i < max && std::cin >> donations[i])
    {
        if(++i < max)
            std::cout << "Donation #" << i+1 << ": ";
    }

    double total = 0.0;
    int over = 0;
    for(int j = 0; j < i; j++)
    {
        total+=donations[j];
    }

    int avg = total / i;

    for(int j = 0; j < i; j++)
    {
        if(donations[j] > avg)
            over++;
    }

    std::cout << "\n";
    std::cout <<  avg << " Average of donations\n";
    std::cout << "Number of donations over the average amount " << over << "\n";

    return 0;
}
