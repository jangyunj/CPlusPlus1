#include <iostream>
// Dynamic memory - stores in HEAP rather than stack
//                - allocated after the program is already compiled and running
//                - useful when we don't know how much memory we'll need; more flexible

int main()
{
    int *pNum = NULL; // set to null since not assigning to pointer right away
    pNum = new int;
    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum; // freeing up the memory at the end
}