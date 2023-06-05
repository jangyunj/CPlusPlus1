#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));

    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a sticker\n";
    case 2:
        std::cout << "You win a bicycle\n";
        break;
    case 3:
        std::cout << "You win a computer\n";
        break;
    case 4:
        std::cout << "You win a book\n";
        break;
    case 5:
        std::cout << "You win a tshirt\n";
        break;
    }
}