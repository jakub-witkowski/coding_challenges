#include <iostream>
#include <algorithm>

int check_number(int n)
{
    return (n > 0) ? n : -n;
}

int i{0};
int input{};
int numbers[3];

int main()
{
    while (i < 3)
    {
        std::cout << "Podaj liczbę nr " << i + 1 << std::endl;
        std::cin >> numbers[i];
        numbers[i] = check_number(numbers[i]);
        i++;
    }

    std::cout << "Wprowadzone liczby to: " << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << i + 1 << ": " << numbers[i] << " " << std::endl;

    int max = std::max(std::max(numbers[0], numbers[1]), numbers[2]);

    std::cout << "Największa z podanych liczb to: " << max << std::endl;

    std::cout << "Powtarzam sumę dwóch mniejszych liczb " << max << " razy" << std::endl;
    for (int i = 1; i <= max; i++)
        std::cout << i << ": " << numbers[0] + numbers[1] + numbers[2] - max << std::endl;
}