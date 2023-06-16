#include <iostream>

int getIndex(std::string foods[], int size, std::string myFood);

int main()
{
    std::string foods[] = {"pizza", "hotdog", "hamburger"};
    int size = sizeof(foods) / sizeof(int);
    int index;
    std::string myFood;

    std::cout << "Enter food to search for: ";
    std::getline(std::cin, myFood);

    index = getIndex(foods, size, myFood);

    if (index != -1)
    {
        std::cout << myFood << " is at index " << index;
    }
    else
    {
        std::cout << myFood << " is not in the array ";
    }
}

int getIndex(std::string foods[], int size, std::string myFood)
{
    for (int i = 0; i < size; i++)
    {
        if (foods[i] == myFood)
        {
            return i;
        }
    }
    return -1;
}