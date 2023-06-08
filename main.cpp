// Global var - outside the scope; less secure and pollutes the namespace (try to avoid)
// Local var - inside the scope

#include <iostream>

int myNum = 3; // Glocal variable

void printNum();

int main()
{
    int myNum = 2;
    std::cout << ::myNum << '\n'; // Scope resolution operator -- makes global var take precedence
    printNum();
}

void printNum()
{
    int myNum = 1;
    std::cout << ::myNum << '\n';
}