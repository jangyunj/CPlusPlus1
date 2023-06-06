// Function signature = function name + parameter (needs to be unique)
//---Function Overload---
#include <iostream>

void Pizza();
void Pizza(std::string topping1);
void Pizza(std::string topping1, std::string topping2);

int main()
{
    Pizza();
    Pizza("cheese");
    Pizza("pepperoni", "ham");
}

void Pizza()
{
    std::cout << "You ordered a pizza\n";
}
void Pizza(std::string topping1)
{
    std::cout << "You ordered a " << topping1 << " pizza\n";
}
void Pizza(std::string topping1, std::string topping2)
{
    std::cout << "You ordered a " << topping1 << " and " << topping2 << " pizza\n";
}
