#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);
    std::cout << z;
}