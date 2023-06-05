// Function signature = function name + parameter (needs to be unique)

#include <iostream>

void raffleTickets();
void raffleTickets(int num1);
void raffleTickets(int num1, int num2);

int main()
{
    raffleTickets();  //--OR--
    raffleTickets(1); //--OR--
    raffleTickets(4, 5);
}

void raffleTickets()
{
    std::cout << "You have a raffle ticket\n";
}
void raffleTickets(int num1)
{
    std::cout << "You have raffle ticket: " << num1 << '\n';
}
void raffleTickets(int num1, int num2)
{
    std::cout << "You have raffle ticket: " << num1 << " and " << num2 << '\n';
}
