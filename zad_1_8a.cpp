#include <iostream>
#include <string>
#include <iomanip>

class Kalkulator
{
    public:
    float n1;
    float n2;
    char oper;
    std::string result;
    std::string answer{};

    bool are_numbers_different()
    {
        return (n1 == n2 ? true : false);
    }

    std::string add()
    {
        answer = "Wynik dodawania: ";
        return answer + std::to_string(n1 + n2);
    }

    std::string subtract()
    {
        answer = "Wynik odejmowania: ";
        return answer + std::to_string(n1 - n2);
    }

    std::string multiply()
    {
        answer = "Wynik mnożenia: ";
        return answer + std::to_string(n1 * n2);
    }

    std::string divide()
    {
        if (n2 != 0)
        {
            if(!are_numbers_different())
            {
                answer = "Wynik dzielenia: ";
                return answer + std::to_string(n1) + 
                        " / " + std::to_string(n2) + "= " +
                        std::to_string(n1 / n2) + ", "
                        + std::to_string(n2) + 
                        " / " + std::to_string(n1) + "= " 
                        + std::to_string(n2 / n1);
            }
            else
            {
                answer = "Wynik dzielenia: ";
                return answer + std::to_string(n1 / n2);
            }
        }
        else
        {
            answer = "Błąd. Dzielenie przez zero.";
            return answer;
        }
    }

    std::string operation()
        {
            switch(oper)
            {
                case '+':
                result = add();
                break;
                case '-':
                result = subtract();
                break;
                case '*':
                result = multiply();
                break;
                case '/':
                result = divide();
                break;
            }

            return result;
        }

    Kalkulator(float liczba1, float liczba2, char znak) : n1(liczba1), n2(liczba2), oper(znak)
    {
        
    }
};

int main()
{
float input1{};
float input2{};
char input3{};

    std::cout << "Wprowadź liczbę: " << std::endl;
    std::cin >> input1;

    std::cout << "Wprowadź kolejną liczbę: " << std::endl;
    std::cin >> input2;

    std::cout << "Wprowadź znak oznaczający wybrane działanie: +, -, * lub /" << std::endl;
    std::cin >> input3;

//    Kalkulator calc1(4.37, 12.6, '/');
    Kalkulator calc1(input1, input2, input3);
    std::cout << calc1.operation() << std::endl;

    Kalkulator calc2{calc1};
    calc2.oper = '/';
    std::cout << calc2.operation() << std::endl;
}