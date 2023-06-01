#include <iostream>

int main()
{
    int first_num, second_num, sum;

    std::cout << "Enter 2 numbers to add: ";
    std::cin >> first_num >> second_num;

    sum = first_num + second_num;

    std::cout << first_num << " + " << second_num << " = " << sum;
}