#include <iostream>

int input{};

int main()
{
    std::cout << "Wprowadź liczbę całkowitą: " << std::endl;
    std::cin >> input;

    if ((input % 3 == 0) && (input % 5 == 0))
        std::cout << "Liczba " << input << " jest podzielna przez 3 oraz 5." << std::endl;
    else if ((input % 3 == 0) && (input % 5 != 0))
        std::cout << "Liczba " << input << " jest podzielna przez 3 ale nie przez 5." << std::endl;
    else if ((input % 3 != 0) && (input % 5 == 0))
        std::cout << "Liczba " << input << " jest podzielna przez 5 ale nie przez 3." << std::endl;
    else
        std::cout << "Liczba " << input << " nie jest podzielna przez 3 ani przez 5." << std::endl;
}