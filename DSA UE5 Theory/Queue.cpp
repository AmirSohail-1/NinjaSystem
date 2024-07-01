#include <iostream>
#include <queue>

void Main()
{
    std::queue<std::string> eventQueue;
    eventQueue.push("StartGame");
    eventQueue.push("EndGame");

    while (!eventQueue.empty())
    {
        std::cout << "Event: " << eventQueue.front() << std::endl;
        eventQueue.pop();
    }
}

int main()
{
    Main();
    return 0;
}
