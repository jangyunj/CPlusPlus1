// Global var - outside the scope
// Local var - inside the scope

#include <iostream>

int myNum = 3; // Glocal variable

void printNum();

int main()
{
    int myNum = 2; // Local var takes precedence
    std::cout << myNum << '\n';
    printNum();
}

void printNum()
{
    int myNum = 1; // Function will use local var first
    std::cout << myNum << '\n';
}