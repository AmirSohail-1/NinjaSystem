#include <iostream>
#include <vector>
#include <stack>

class Graph
{
    int numVertices;
    std::vector<std::vector<int>> adjLists;

public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    void DFS(int startVertex);
};

Graph::Graph(int vertices)
{
    numVertices = vertices;
    adjLists.resize(vertices);
}

void Graph::addEdge(int src, int dest)
{
    adjLists[src].push_back(dest);
}

void Graph::DFS(int startVertex)
{
    std::vector<bool> visited(numVertices, false);
    std::stack<int> stack;
    stack.push(startVertex);

    while (!stack.empty())
    {
        int vertex = stack.top();
        stack.pop();

        if (!visited[vertex])
        {
            std::cout << "Visited " << vertex << std::endl;
            visited[vertex] = true;
        }

        for (auto it = adjLists[vertex].rbegin(); it != adjLists[vertex].rend(); ++it)
        {
            if (!visited[*it])
                stack.push(*it);
        }
    }
}

void Main()
{
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

    graph.DFS(0);
}

int main()
{
    Main();
    return 0;
}
