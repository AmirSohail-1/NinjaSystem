#include <iostream>
#include <unordered_map>

void Main()
{
    std::unordered_map<std::string, int> assetMap;
    assetMap["HeroTexture"] = 1;

    if (assetMap.find("HeroTexture") != assetMap.end())
    {
        std::cout << "Asset found with ID: " << assetMap["HeroTexture"] << std::endl;
    }
    else
    {
        std::cout << "Asset not found" << std::endl;
    }
}

int main()
{
    Main();
    return 0;
}
