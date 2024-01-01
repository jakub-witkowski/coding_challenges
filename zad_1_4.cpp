#include <iostream>
#include <vector>

std::vector<char> vowels{'a', 'e', 'i', 'o', 'u', 'y'};
std::vector<char> numbers{'0', '1', '2', '3', '4', '5', '6', '7', '8','9'};
std::vector<char> consonants{'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n',
                        'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
char input;

bool compare(char c, std::vector<char>& v)
{
    bool found = false;
    for (int i = 0; i < v.size(); i++)
    {
        if(c == v[i])
            found = true;
    }

    return found;
}

int main()
{
    std::cout << "Wprowadź znak: " << std::endl;
    std::cin >> input;

//    std::cout << compare(input, numbers) << std::endl;

    if (compare(input, vowels) == true)
        std::cout << "Znak " << input << " to samogłoska" << std::endl;
    else if (compare(input, numbers) == true)
        std::cout << "Znak " << input << " to cyfra" << std::endl;
    else if (compare(input, consonants) == true)
        std::cout << "Znak " << input << " to spółgłoska" << std::endl;
    else
        std::cout << "Znak " << input << " nie jest samogłoską, spółgłoską ani cyfrą";
}