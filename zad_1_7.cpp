#include <iostream>

int i{0};
char input;

int main()
{
    std::cout << "Wprowadź dowolny znak. Znak 'x' kończy pracę programu: " << std::endl;

    while (input != 'x')
    {
    std::cin >> input;
    i++;
    }

    std::cout << "Wprowadzono " << i << " znaków." << std::endl;
}