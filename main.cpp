// Global var - outside the scope
// Local var - inside the scope

#include <iostream>

void printNum();

int main()
{
    int myNum = 1; // Local variable to the main function
    printNum();
}

void printNum()
{
    std::cout << myNum; // Won't work because myNum was not declared inside the function
                        // Functions cannot see other functions
}