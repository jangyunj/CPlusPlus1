// Global var - outside the scope
// Local var - inside the scope

#include <iostream>

int myNum = 3; // Glocal variable

void printNum();

int main()
{
    printNum();
    std::cout << myNum;
}

void printNum()
{
    std::cout << myNum;
}