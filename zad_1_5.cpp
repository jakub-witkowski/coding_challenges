#include <iostream>

int i{0};
float input{};
float numbers[5];

int main()
{
    while (i < 5)
    {
        std::cout << "Podaj liczbę nr " << i + 1 << std::endl;
        std::cin >> numbers[i];
        i++;
    }

    std::cout << "Wprowadzone liczby to: " << std::endl;
    for (int i = 0; i < 5; i++)
        std::cout << i + 1 << ": " << numbers[i] << " " << std::endl;

    if (numbers[4] == 0)
    {
        std::cout << "Ostatnia z podanych liczb wynosi 0, nie można dokończyć działania." << std::endl;
    }
    else
    {
        float result = (((numbers[0] + numbers[1])*numbers[2])-numbers[3])/numbers[4];
        std::cout << "Wynik działania to: " << result << std::endl;
    }
}