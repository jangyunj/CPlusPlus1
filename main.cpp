#include <iostream>
// Recursion approach - function inside of a function; used for sorting & searching algorithms

int factorial(int num);

int main()
{
    std::cout << factorial(5);
}

int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}
