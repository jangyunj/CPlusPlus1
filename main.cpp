#include <iostream>

int main()
{
    // Sizeof - determines the size in bytes of a variable, data type, class, objects etc.

    double gpa = 2.5;                // double - 8 bytes
    std::string name = "Bro";        // String is reference type; 32 bytes
    char grade = 'A';                // char - 1 byte
    bool student = true;             // bool - 1 byte
    char grades[] = {'A', 'B', 'C'}; // 3 bytes
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(grades) / sizeof(char) << " elements\n"; // Finds the # of elements
    std::cout << sizeof(students) / sizeof(std::string) << " elements\n";
}