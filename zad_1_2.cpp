#include <iostream>

int input{};

std::string is_even(int n)
{
    return ((n % 2) == 0) ? "Tak" : "Nie";
}

int main()
{
    std::cout << "Wprowadź liczbę: " << std::endl;
    std::cin >> input;

    std::cout << "Czy liczba jest parzysta?: " << std::endl;
    std::cout << is_even(input) << std::endl;
}