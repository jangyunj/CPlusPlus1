// Literals - values such as numbers, characters, or string of characters whose values are self-evident
// integer literals - decimal, octal, hexadecimal
// Octal- 0
// Hexadecimal - Ox, OX
#include <iostream>

int main()
{
    int n, m, o;
    n = 25;
    m = 031;
    o = 0x19;
    std::cout << n << std::endl
              << m << std::endl
              << o;
}