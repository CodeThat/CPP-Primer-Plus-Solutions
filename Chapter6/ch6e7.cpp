#include <iostream>
#include <string>

using namespace std;

const int size = 50;

int main()
{
    char word[size];
    int vowels = 0;
    int consonants = 0;
    int others = 0;

    cout << "Enter words (q to quit): ";

    while(cin.get(word, size) && (word[0] != 'q' || word[0] != 'Q'))
    {
        char * ch = new char;
        *ch = word[0];

        if(isalpha(word[0]))
        {
            switch(*ch)
            {
            case 'a' :
                vowels++;
                break;
            case 'e' :
                vowels++;
                break;
            case 'i' :
                vowels++;
                break;
            case 'o' :
                vowels++;
                break;
            case 'u' :
                vowels++;
                break;
            default  :
                consonants++;
                break;
            }
        }
        else
            others++;
        cin.get(); // keep grabbing words after enter is pressed
        delete ch;
    }
    cout << vowels << " words beginning with vowels\n"
         << consonants << " words begining with consonants\n"
         << others << " others";

    return 0;
}
