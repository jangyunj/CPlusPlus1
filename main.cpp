// Logical Operators
//&& || !

#include <iostream>

int main()
{
    bool sunny = true;

    if (!sunny)
    {
        std::cout << "It's cloudy today";
    }
    else
    {
        std::cout << "It's sunny outside";
    }
}