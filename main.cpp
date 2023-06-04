#include <iostream>

int main()
{
    // Do while - do something first, THEN repeat again if condition is true
    // Ex. at the end of the game you've played, ask the user if they want to play again.
    int number;
    do
    {
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The # is: " << number;
}