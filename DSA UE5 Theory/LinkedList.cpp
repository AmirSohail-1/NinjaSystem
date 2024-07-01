#include <iostream>

class Node
{
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void Main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    Node* current = head;
    while (current != nullptr)
    {
        std::cout << "Node data: " << current->data << std::endl;
        current = current->next;
    }

    // Cleanup
    current = head;
    while (current != nullptr)
    {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

int main()
{
    Main();
    return 0;
}
