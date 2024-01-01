#include <iostream>

float n1{};
float n2{};
char oper{};
float result{};

int main()
{
    std::cout << "Wprowadź dwie liczby: " << std::endl;
    std::cin >> n1;
    std::cin >> n2;

    std::cout << "Wprowadż znak odpowiadający działaniu: +, -, * lub /: ";
    std::cin >> oper;

    switch(oper)
    {
        case '+':
        result = n1 + n2;
        break;
        case '-':
        result = n1 - n2;
        break;
        case '*':
        result = n1 * n2;
        break;
        case '/':
        {
            if (n2 != 0)
                result = n1/n2;
            else
                std::cout << "Błąd dzielenia przez zero." << std::endl;
        }
        break;
    }

    std::cout << "Wynik działania wynosi " << result << std::endl;
}