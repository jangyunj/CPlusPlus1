#include <iostream>

int main()
{
    // Foreach - loop that eases the traversal over an iterable data set
    //         - less flexible

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for (char grade : grades)
    {
        std::cout << grade << '\n';
    }

    int numbers[] = {10, 20, 30, 40};
    for (int number : numbers)
    {
        std::cout << number << '\n';
    }
}