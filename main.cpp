#include <iostream>

int main()
{
    int i = 1;
    int j = ++i;
    int k = j++; // still 2; not increased yet; it will increase at the end of the loop

    std::cout << k;
}