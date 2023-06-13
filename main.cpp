#include <iostream>

int main()
{
    // std::string students[] = {"Bob", "Sandy", "Pat", "Sam"};

    // for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
    // {
    //     std::cout << students[i] << '\n';
    // }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    for (int i = 0; i < sizeof(grades) / sizeof(char); i++)
    {
        std::cout << grades[i];
    }
}