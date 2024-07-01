#include <iostream>
#include <stack>

void Main()
{
    std::stack<std::string> gameStateStack;
    gameStateStack.push("Play");
    gameStateStack.push("Pause");

    while (!gameStateStack.empty())
    {
        std::cout << "Current State: " << gameStateStack.top() << std::endl;
        gameStateStack.pop();
    }
}

int main()
{
    Main();
    return 0;
}
