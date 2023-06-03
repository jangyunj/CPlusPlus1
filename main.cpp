// Type conversion - conversion of one data type to another
// Implicit - automatic
// Explicit - Precede value with new data type using parenthesis

#include <iostream>

int main()
{
    double x = (int)3.14; // Explicitly cast as int
    std::cout << x;

    std::cout << (char)100;
    //------------------------------------------------//
    int correct = 8;
    int questions = 10;

    double score = correct / (double)questions * 100; // Useful in cases of integer division
    std::cout << score << "%";
}