#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    if (name.length() > 12)
    {
        std::cout << "Your name cannot be over 12 characters";
    }
    else if (name.empty())
    {
        std::cout << "You did not enter your name";
    }
    else
    {
        std::cout << "Welcome " << name;
    }
}

// other string methods
// name.clear()