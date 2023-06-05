#include <iostream>

double square(double length);
double cube(double length);

int main()
{
    double length = 2.0;
    double area = square(length);
    std::cout << "Area: " << area << "cm^2\n";

    double volume = cube(length);
    std::cout << "Volume: " << volume << "cm^3\n";
}

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}