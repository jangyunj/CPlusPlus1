#include <iostream>
template <typename T, typename U>

// function template - compatible with different data types; don't need to write multiple fx

auto max(T x, U y)
{
    return x > y ? x : y;
}

int main()
{
    std::cout << max(3, 4.1) << '\n';
}
