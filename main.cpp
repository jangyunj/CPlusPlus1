#include <iostream>
#include <cmath>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    double x = 3.14;
    double y = 4;
    double z;

    z = pow(3, 1);
    z = sqrt(9);
    z = abs(-3);
    z = round(x);
    z = ceil(x);  // always rounds UP
    z = floor(x); // always rounds DOWN
    std::cout << z;
}