#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;
    std::cout << "What is your name? ";
    std::cin >> name; // stores in the variable "name"

    std::cout << "Hello " << name;
}