#include <iostream>
template <typename T, typename U>

// function template

auto max(T x, U y)
{
    return x > y ? x : y;
}

int main()
{
    std::cout << max(3, 4.1) << '\n';
}
