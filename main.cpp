#include <iostream>
// using std::cout;
// using std::string;

// namespace provides a solution for preventing name conflicts in large projects; allows identically named entities in diff namespaces
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