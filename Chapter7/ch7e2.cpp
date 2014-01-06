#include <iostream>

const int maxSize = 10;

// Prototypes
int input(int scores[], int arSize);
double avg(int scores[], int arSize);
void display(int scores[], int arSize);

int main()
{
    int scores[maxSize];
    int arSize = input(scores, maxSize);
    display(scores, arSize);
    std::cout << "Average score: " << avg(scores, arSize);
    return 0;
}

int input(int scores[], int arSize)
{
    double score;
    int count = 0;
    std::cout << "Enter up to " << maxSize << " scores (press -1 to terminate)\n"; // Loop up to 10 times
    for(int i = 0; i < maxSize; i++) // Loop until maxSize
    {
        std::cout << "Enter Score #" << (i + 1) << ": ";
        std::cin >> score;
        if(score > 0)
        {
            scores[i] = score; // assign score to score[i]
            count++;
        }
        else
            break;

    }
    return count; // return something sice fucntion is not void.

}

double avg(int scores[], int arSize)
{
    double total = 0;
    for(int i = 0; i < arSize; i++) // Loop as many times as was actually inputted
    {
        total += scores[i];
    }
    return total/arSize;
}

void display(int scores[], int arSize)
{
    std::cout << "Scores: ";
    for(int i = 0; i < arSize; i++) // Loop as many times as was actually inputted
    {
        std::cout << scores[i] << " "; // Print to one line
    }
}
