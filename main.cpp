#include <iostream>
// Iterative approach
int factorial(int num);

int main()
{
}

int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i
    }
    return result;
}