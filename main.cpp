#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
}

char getUserChoice()
{
    char player;
    std::cout << "Rock-Paper-Scissors\n";
    do
    {
        std::cout << "Choose one of the following\n";
        std::cout << "*******************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');
    // This prompt will repeat if the user enters something that is NOT r, p, s

    std::cout << player;
}
char getComputerChoice()
{
    return 0;
}
void showChoice(char choice) {}
void chooseWinner(char player, char computer) {}