#include <iostream>

int getIndex(int numbers[], int size, int myNum);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(int);
    int index;
    int myNum;

    std::cout << "Enter a number to search: ";
    std::cin >> myNum;

    index = getIndex(numbers, size, myNum);

    if (index != -1)
    {
        std::cout << myNum << " is at element " << index;
    }
    else
    {
        std::cout << myNum << " is not found";
    }
}

int getIndex(int numbers[], int size, int myNum)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == myNum)
        {
            return i;
        }
    }
    return -1;
}