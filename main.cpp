#include <iostream>

// different namespace can have same named variables
namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    // int x = 0;
    // std::cout << x;
    // std::cout << first::x; //:: <- scope resolution operator
    // std::cout << second::x;

    //---OR---
    using namespace first;
    std::cout << x;

    return 0;
}