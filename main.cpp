#include <iostream>

int main()
{
    // pointers = variable that stores memory address of another variable
    //& address of operator
    //* dereference operator

    std::string name = "Bro";
    int age = 21;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name; // pointer is pointing to the name address variable
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName; // accessing the VALUE at this memory location
    std::cout << *pAge;
    std::cout << *pFreePizzas;
}