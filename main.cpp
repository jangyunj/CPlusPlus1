#include <iostream>
#include <ctime>

int main()
{

    srand(time(NULL)); // use srand fx.
                       // seed is current calendar time

    int num1 = (rand() % 6) + 1; // Six sided dice 1-6
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
}