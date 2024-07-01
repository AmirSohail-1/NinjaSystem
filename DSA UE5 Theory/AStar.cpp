#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <unordered_set>
#include <set>

class Node
{
public:
    int x, y;
    float gCost, hCost, fCost;
    Node* parent;

    Node(int x, int y) : x(x), y(y), gCost(0), hCost(0), fCost(0), parent(nullptr) {}

    bool operator==(const Node& other) const
    {
        return x == other.x && y == other.y;
    }

    struct HashFunction
    {
        std::size_t operator()(const Node& node) const
        {
            return std::hash<int>()(node.x) ^ std::hash<int>()(node.y);
        }
    };

    bool operator<(const Node& other) const
    {
        return fCost < other.fCost;
    }
};

float CalculateDistance(Node* a, Node* b)
{
    return std::sqrt((a->x - b->x) * (a->x - b->x) + (a->y - b->y) * (a->y - b->y));
}

std::vector<Node*> GetNeighbors(Node* node)
{
    std::vector<Node*> neighbors;
    neighbors.push_back(new Node(node->x + 1, node->y));
    neighbors.push_back(new Node(node->x - 1, node->y));
    neighbors.push_back(new Node(node->x, node->y + 1));
    neighbors.push_back(new Node(node->x, node->y - 1));
    return neighbors;
}

std::vector<Node*> AStar(Node* start, Node* goal)
{
    auto compare = [](Node* a, Node* b) { return a->fCost > b->fCost; };
    std::priority_queue<Node*, std::vector<Node*>, decltype(compare)> openSet(compare);
    std::set<Node*> openSetLookup;
    std::unordered_set<Node, Node::HashFunction> closedSet;

    start->hCost = CalculateDistance(start, goal);
    start->fCost = start->hCost;
    openSet.push(start);
    openSetLookup.insert(start);

    while (!openSet.empty())
    {
        Node* current = openSet.top();
        openSet.pop();
        openSetLookup.erase(current);

        if (*current == *goal)
        {
            std::vector<Node*> path;
            while (current != nullptr)
            {
                path.push_back(current);
                current = current->parent;
            }
            return path;
        }

        closedSet.insert(*current);

        for (Node* neighbor : GetNeighbors(current))
        {
            if (closedSet.find(*neighbor) != closedSet.end())
            {
                delete neighbor;
                continue;
            }

            float tentativeGCost = current->gCost + CalculateDistance(current, neighbor);

            auto it = openSetLookup.find(neighbor);
            if (it == openSetLookup.end() || tentativeGCost < neighbor->gCost)
            {
                neighbor->gCost = tentativeGCost;
                neighbor->hCost = CalculateDistance(neighbor, goal);
                neighbor->fCost = neighbor->gCost + neighbor->hCost;
                neighbor->parent = current;

                if (it == openSetLookup.end())
                {
                    openSet.push(neighbor);
                    openSetLookup.insert(neighbor);
                }
            }
            else
            {
                delete neighbor;
            }
        }
    }

    return std::vector<Node*>();
}

void Main()
{
    Node* start = new Node(0, 0);
    Node* goal = new Node(5, 5);

    std::vector<Node*> path = AStar(start, goal);

    if (!path.empty())
    {
        std::cout << "Path found:" << std::endl;
        for (Node* node : path)
        {
            std::cout << "(" << node->x << ", " << node->y << ")" << std::endl;
        }
    }
    else
    {
        std::cout << "Path not found" << std::endl;
    }

    // Cleanup
    for (Node* node : path)
    {
        delete node;
    }
    delete start;
    delete goal;
}

int main()
{
    Main();
    return 0;
}
