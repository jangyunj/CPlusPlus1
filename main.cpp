#include <iostream>

int main()
{
    int i = 3, j = ++i, k = ++i;
    std::cin >> i;

    std::cout << k + i << j - i << i * i; // Result: 10-125
}