#include <iostream>
#include <vector>
#include <algorithm>

void AddTask(std::vector<int>& taskHeap, int taskPriority)
{
    taskHeap.push_back(taskPriority);
    std::push_heap(taskHeap.begin(), taskHeap.end(), std::greater<int>());
}

int GetNextTask(std::vector<int>& taskHeap)
{
    std::pop_heap(taskHeap.begin(), taskHeap.end(), std::greater<int>());
    int task = taskHeap.back();
    taskHeap.pop_back();
    return task;
}

void Main()
{
    std::vector<int> taskHeap;
    std::make_heap(taskHeap.begin(), taskHeap.end(), std::greater<int>());

    AddTask(taskHeap, 10);
    AddTask(taskHeap, 5);
    AddTask(taskHeap, 20);

    std::cout << "Next Task Priority: " << GetNextTask(taskHeap) << std::endl;
}

int main()
{
    Main();
    return 0;
}
