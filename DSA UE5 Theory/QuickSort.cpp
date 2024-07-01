#include <iostream>
#include <vector>

int Partition(std::vector<int>& array, int low, int high)
{
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            std::swap(array[i], array[j]);
        }
    }
    std::swap(array[i + 1], array[high]);
    return i + 1;
}

void QuickSort(std::vector<int>& array, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = Partition(array, low, high);
        QuickSort(array, low, pivotIndex - 1);
        QuickSort(array, pivotIndex + 1, high);
    }
}

void Main()
{
    std::vector<int> array = {10, 7, 8, 9, 1, 5};
    QuickSort(array, 0, array.size() - 1);

    for (int num : array)
    {
        std::cout << "Num: " << num << std::endl;
    }
}

int main()
{
    Main();
    return 0;
}
