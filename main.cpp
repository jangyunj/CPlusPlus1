#include <iostream>

int main()
{
    const double PI = 3.14; // const should be uppercased
    const int LIGHT_SPEED = 299792458;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";
}