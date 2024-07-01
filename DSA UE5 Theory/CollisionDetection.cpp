#include <iostream>

struct Box
{
    float xMin, xMax, yMin, yMax;

    Box(float xMin, float xMax, float yMin, float yMax)
        : xMin(xMin), xMax(xMax), yMin(yMin), yMax(yMax) {}
};

bool CheckAABBCollision(const Box& box1, const Box& box2)
{
    return (box1.xMin < box2.xMax && box1.xMax > box2.xMin &&
            box1.yMin < box2.yMax && box1.yMax > box2.yMin);
}

void Main()
{
    Box box1(0.0f, 50.0f, 0.0f, 50.0f);
    Box box2(25.0f, 75.0f, 25.0f, 75.0f);

    if (CheckAABBCollision(box1, box2))
    {
        std::cout << "Boxes are colliding" << std::endl;
    }
    else
    {
        std::cout << "Boxes are not colliding" << std::endl;
    }
}

int main()
{
    Main();
    return 0;
}
