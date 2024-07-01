 #include "YourProjectName.h"
#include  "YourActorClass.h"

void AYourActorClass::BeginPlay()
{
    Super::BeginPlay();

    Main();
}


// Common Data Structures and Algorithms in Game Development
// Data Structures
// Arrays

// Used for storing a collection of items.
// Example: Storing vertices of a mesh.

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

void Main()
{
    TArray<FVector> Vertices;
    Vertices.Add(FVector(0.0f, 0.0f, 0.0f));
    Vertices.Add(FVector(100.0f, 0.0f, 0.0f));
    Vertices.Add(FVector(0.0f, 100.0f, 0.0f));

    for (const FVector& Vertex : Vertices)
    {
        UE_LOG(LogTemp, Warning, TEXT("Vertex: %s"), *Vertex.ToString());
    }
}



// Linked Lists

// Useful for dynamic memory allocation.
// Example: Managing objects in a scene graph.

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class SceneNode
{
public:
    FString Name;
    SceneNode* Next;

    SceneNode(const FString& InName) : Name(InName), Next(nullptr) {}
};

void Main()
{
    SceneNode* Head = new SceneNode(TEXT("RootNode"));
    SceneNode* ChildNode = new SceneNode(TEXT("ChildNode"));
    Head->Next = ChildNode;

    SceneNode* CurrentNode = Head;
    while (CurrentNode != nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("Node: %s"), *CurrentNode->Name);
        CurrentNode = CurrentNode->Next;
    }

    delete Head;
    delete ChildNode;
}


// Stacks

// Used for tasks requiring Last-In-First-Out (LIFO) order.
// Example: Managing game states (pause, play, game over).
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

void PushGameState(TArray<FString>& GameStateStack, const FString& NewState)
{
    GameStateStack.Push(NewState);
}

FString PopGameState(TArray<FString>& GameStateStack)
{
    return GameStateStack.Pop();
}

void Main()
{
    TArray<FString> GameStateStack;
    PushGameState(GameStateStack, TEXT("Play"));
    PushGameState(GameStateStack, TEXT("Pause"));

    UE_LOG(LogTemp, Warning, TEXT("Current State: %s"), *PopGameState(GameStateStack));
    UE_LOG(LogTemp, Warning, TEXT("Current State: %s"), *PopGameState(GameStateStack));
}


// Queues

// Useful for First-In-First-Out (FIFO) order.
// Example: Event handling systems.
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

void EnqueueEvent(TQueue<FString>& EventQueue, const FString& Event)
{
    EventQueue.Enqueue(Event);
}

FString DequeueEvent(TQueue<FString>& EventQueue)
{
    FString Event;
    EventQueue.Dequeue(Event);
    return Event;
}

void Main()
{
    TQueue<FString> EventQueue;
    EnqueueEvent(EventQueue, TEXT("StartGame"));
    EnqueueEvent(EventQueue, TEXT("EndGame"));

    FString Event;
    while (EventQueue.Dequeue(Event))
    {
        UE_LOG(LogTemp, Warning, TEXT("Event: %s"), *Event);
    }
}


// Trees

// Used for hierarchical data representation.
// Example: Quadtrees and octrees for spatial partitioning.
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class QuadtreeNode
{
public:
    FBox2D Bounds;
    TArray<AActor*> Actors;
    TArray<QuadtreeNode*> Children;

    QuadtreeNode(const FBox2D& InBounds) : Bounds(InBounds) {}

    void Subdivide();
};

void QuadtreeNode::Subdivide()
{
    FVector2D Center = Bounds.GetCenter();
    FVector2D Extent = Bounds.GetExtent() * 0.5f;

    Children.Add(new QuadtreeNode(FBox2D(Center - Extent, Center + Extent)));
    // Add three more children similarly
}

void Main()
{
    FBox2D RootBounds(FVector2D(0.0f, 0.0f), FVector2D(100.0f, 100.0f));
    QuadtreeNode* RootNode = new QuadtreeNode(RootBounds);
    RootNode->Subdivide();

    UE_LOG(LogTemp, Warning, TEXT("Quadtree subdivided"));

    for (QuadtreeNode* Child : RootNode->Children)
    {
        delete Child;
    }
    delete RootNode;
}

// Graphs

// Useful for representing networks.
// Example: Pathfinding algorithms (A*).
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class AStarNode
{
public:
    FVector Position;
    TArray<AStarNode*> Neighbors;
    float Cost;
    float Heuristic;

    AStarNode(const FVector& InPosition) : Position(InPosition), Cost(0), Heuristic(0) {}
};

void AStarSearch(AStarNode* StartNode, AStarNode* GoalNode)
{
    TArray<AStarNode*> OpenList;
    OpenList.Add(StartNode);

    while (OpenList.Num() > 0)
    {
        AStarNode* CurrentNode = OpenList[0];
        // Implement the A* algorithm steps here
    }
}

void Main()
{
    AStarNode* StartNode = new AStarNode(FVector(0.0f, 0.0f, 0.0f));
    AStarNode* GoalNode = new AStarNode(FVector(100.0f, 100.0f, 100.0f));

    AStarSearch(StartNode, GoalNode);

    delete StartNode;
    delete GoalNode;
}

// Hash Tables

// Provide efficient lookup, insert, and delete operations.
// Example: Storing game assets for quick retrieval.
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

void AddAsset(TMap<FString, UTexture2D*>& AssetMap, const FString& AssetName, UTexture2D* Texture)
{
    AssetMap.Add(AssetName, Texture);
}

UTexture2D* GetAsset(TMap<FString, UTexture2D*>& AssetMap, const FString& AssetName)
{
    return AssetMap[AssetName];
}

void Main()
{
    TMap<FString, UTexture2D*> AssetMap;
    AddAsset(AssetMap, TEXT("HeroTexture"), nullptr); // Assuming nullptr for simplicity
    UTexture2D* Texture = GetAsset(AssetMap, TEXT("HeroTexture"));

    if (Texture)
    {
        UE_LOG(LogTemp, Warning, TEXT("Asset found"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Asset not found"));
    }
}

// Heaps

// Useful for implementing priority queues.
// Example: Managing tasks in a scheduler.
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

void AddTask(TArray<int32>& TaskHeap, int32 TaskPriority)
{
    TaskHeap.HeapPush(TaskPriority, TLess<int32>());
}

int32 GetNextTask(TArray<int32>& TaskHeap)
{
    int32 Task;
    TaskHeap.HeapPop(Task, TLess<int32>());
    return Task;
}

void Main()
{
    TArray<int32> TaskHeap;
    AddTask(TaskHeap, 10);
    AddTask(TaskHeap, 5);
    AddTask(TaskHeap, 20);

    UE_LOG(LogTemp, Warning, TEXT("Next Task Priority: %d"), GetNextTask(TaskHeap));
}



// Algorithms
// Sorting Algorithms

// Quick Sort, Merge Sort, and Bubble Sort.
// Example: Sorting objects based on distance from the camera.
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

int32 Partition(TArray<int32>& Array, int32 Low, int32 High)
{
    int32 Pivot = Array[High];
    int32 i = Low - 1;

    for (int32 j = Low; j <= High - 1; j++)
    {
        if (Array[j] <= Pivot)
        {
            i++;
            Swap(Array[i], Array[j]);
        }
    }
    Swap(Array[i + 1], Array[High]);
    return i + 1;
}

void QuickSort(TArray<int32>& Array, int32 Low, int32 High)
{
    if (Low < High)
    {
        int32 PivotIndex = Partition(Array, Low, High);
        QuickSort(Array, Low, PivotIndex - 1);
        QuickSort(Array, PivotIndex + 1, High);
    }
}

void Main()
{
    TArray<int32> Array = { 10, 7, 8, 9, 1, 5 };
    QuickSort(Array, 0, Array.Num() - 1);

    for (int32 Num : Array)
    {
        UE_LOG(LogTemp, Warning, TEXT("Num: %d"), Num);
    }
}

// Search Algorithms

// Binary Search, Depth-First Search (DFS), Breadth-First Search (BFS).
// Example: Finding a path in a navigation mesh.

// Pathfinding Algorithms

// A*, Dijkstra’s Algorithm.
// Example: NPC movement and navigation.
 #include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class AStarNode
{
public:
    FVector Position;
    TArray<AStarNode*> Neighbors;
    float Cost;
    float Heuristic;

    AStarNode(const FVector& InPosition) : Position(InPosition), Cost(0), Heuristic(0) {}
};

void AStarSearch(AStarNode* StartNode, AStarNode* GoalNode)
{
    TArray<AStarNode*> OpenList;
    OpenList.Add(StartNode);

    while (OpenList.Num() > 0)
    {
        AStarNode* CurrentNode = OpenList[0];
        // Implement the A* algorithm steps here
    }
}

void Main()
{
    AStarNode* StartNode = new AStarNode(FVector(0.0f, 0.0f, 0.0f));
    AStarNode* GoalNode = new AStarNode(FVector(100.0f, 100.0f, 100.0f));

    AStarSearch(StartNode, GoalNode);

    delete StartNode;
    delete GoalNode;
}


// Collision Detection

// Axis-Aligned Bounding Box (AABB), Separating Axis Theorem (SAT).
// Example: Detecting collisions between game objects.
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

bool CheckAABBCollision(const FBox& Box1, const FBox& Box2)
{
    return Box1.Intersect(Box2);
}

void Main()
{
    FBox Box1(FVector(0.0f, 0.0f, 0.0f), FVector(50.0f, 50.0f, 50.0f));
    FBox Box2(FVector(25.0f, 25.0f, 25.0f), FVector(75.0f, 75.0f, 75.0f));

    if (CheckAABBCollision(Box1, Box2))
    {
        UE_LOG(LogTemp, Warning, TEXT("Boxes are colliding"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Boxes are not colliding"));
    }
}


// Data Compression Algorithms

// Huffman Coding, Run-Length Encoding (RLE).
// Example: Reducing the size of game assets for faster loading.

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

FString RunLengthEncode(const FString& Input)
{
    FString Output;
    int32 Count = 1;

    for (int32 i = 1; i < Input.Len(); i++)
    {
        if (Input[i] == Input[i - 1])
        {
            Count++;
        }
        else
        {
            Output += FString::Printf(TEXT("%c%d"), Input[i - 1], Count);
            Count = 1;
        }
    }
    Output += FString::Printf(TEXT("%c%d"), Input[Input.Len() - 1], Count);

    return Output;
}

void Main()
{
    FString Input = TEXT("aaabbbcc");
    FString EncodedString = RunLengthEncode(Input);
    UE_LOG(LogTemp, Warning, TEXT("Encoded String: %s"), *EncodedString);
}





// Artificial Intelligence (AI)

// Finite State Machines (FSM), Behavior Trees.
// Example: NPC behavior and decision-making.

// Physics Simulations

// Verlet Integration, Euler Integration.
// Example: Simulating realistic movements and interactions.

// Rendering Algorithms

// Z-Buffering, Ray Tracing.
// Example: Determining visible surfaces and rendering 3D scenes.

// Optimization Algorithms

// LOD (Level of Detail), Occlusion Culling.
// Example: Improving game performance by reducing rendering load.

// Network Algorithms

// TCP/IP, UDP protocols, Lag Compensation.
// Example: Multiplayer game synchronization.


 