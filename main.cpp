#include <iostream>

int main()
{
    std::string name = "bro";
    int age = 21;
    bool isStudent = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &isStudent << '\n';
}