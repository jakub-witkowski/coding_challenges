#include <iostream>
#include <vector>

int i{0};
int input;
std::vector<int> numbers{};
int how_many_odd{};
int how_many_even{};

int main()
{
    std::cout << "Wprowadź pięć liczb całkowitych: " << std::endl;

    do
    {
    std::cin >> input;
    numbers.push_back(input);    
    i++;
    } while (i < 5);
    
    for (auto it : numbers)
    {
        if (it % 2 == 0)
            how_many_even++;
        else
            how_many_odd++;
    }

    std::cout << how_many_even << " liczb parzystych i " << how_many_odd << " liczb nieparzystych." << std::endl;
}