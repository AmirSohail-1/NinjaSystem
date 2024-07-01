#include <iostream>
#include <string>

std::string RunLengthEncode(const std::string& input)
{
    std::string output;
    int count = 1;

    for (size_t i = 1; i < input.size(); i++)
    {
        if (input[i] == input[i - 1])
        {
            count++;
        }
        else
        {
            output += input[i - 1] + std::to_string(count);
            count = 1;
        }
    }
    output += input.back() + std::to_string(count);

    return output;
}

void Main()
{
    std::string input = "aaabbbcc";
    std::string encodedString = RunLengthEncode(input);
    std::cout << "Encoded String: " << encodedString << std::endl;
}

int main()
{
    Main();
    return 0;
}
