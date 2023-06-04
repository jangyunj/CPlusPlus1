#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // name.at(0);
    // name.insert(0, "@");
    // name.find(' ');
    name.erase(0, 3);

    std::cout << name;
}