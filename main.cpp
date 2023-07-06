#include <iostream>
template <typename T, typename U>

auto min(T x, U y)
{
    return x < y ? x : y;
}

int main()
{
    std::cout << min(2, 3.1);
}