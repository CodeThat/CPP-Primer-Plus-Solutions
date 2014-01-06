#include <iostream>
#include <cctype>

int main()
{
    char ch;

    std::cout << "Enter your characters: ";

    while(std::cin.get(ch) && ch != '@') // While inputting and not an '@'
    {
        if(isdigit(ch))
            continue; // Ignore digits
        if(isalpha(ch)) // Is it in the alphabet?
            if(islower(ch))
                std::cout << char(toupper(ch));
            else
                std::cout << char(tolower(ch));
        else
            std::cout << ch;
    }
    return 0;
}
