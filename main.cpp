// pointers
#include <iostream>

int main()
{
    int *num1 = new int(11); // new int somewhere in memory with value of 11
    int *num2 = num1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
}