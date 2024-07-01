#include <iostream>
#include <vector>

void Main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (int number : numbers)
    {
        std::cout << "Number: " << number << std::endl;
    }
}

int main()
{
    Main();
    return 0;
}
