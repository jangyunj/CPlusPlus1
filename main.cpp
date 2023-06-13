#include <iostream>

int main()
{
    std::string students[] = {"Bob", "Sandy", "Pat", "Sam"};

    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
    {
        std::cout << students[i] << '\n';
    }
}