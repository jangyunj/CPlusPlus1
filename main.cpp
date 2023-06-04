#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100)
    {
        std::cout << "You are too old" << '\n';
    }
    if (age >= 18)
    {
        std::cout << "Welcome to the site";
    }
    else if (age < 0)
    {
        std::cout << "You have not been born yet";
    }
    else
    {
        std::cout << "You are under 18";
    }
}