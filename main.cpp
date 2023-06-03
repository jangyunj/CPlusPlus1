#include <iostream>
#include <cmath>

int main()
{
    double A;
    double B;
    double C;

    std::cout << "Enter side A: ";
    std::cin >> A;

    std::cout << "Enter side B: ";
    std::cin >> B;

    // a = pow(a, 2);   //reassign values
    // b = pow(b, 2);
    // c = sqrt(a + b);

    //---OR---
    C = sqrt(pow(A, 2) + pow(B, 2));

    std::cout << "side C is: " << C;
}