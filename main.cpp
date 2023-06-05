// Function - block of reusable code

#include <iostream>

void happyBirthday(std::string name);

int main()
{
    std::string name = "Bro";
    happyBirthday(name); // pass arguments
}
void happyBirthday(std::string name)
{ // matching parameters
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
}
