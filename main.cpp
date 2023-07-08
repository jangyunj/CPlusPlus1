// pointers
#include <iostream>

int main()
{
    int *num1 = new int(11); // new int somewhere in memory with value of 11
    int *num2 = num1;

    *num1 = 22; // points to this integer
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';

    std::cout << *num1 << '\n'; // prints the integer stored in this memory
    std::cout << *num2 << '\n'; // prints the integer stored in this memory
}