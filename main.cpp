#include <iostream>

int main()
{
   int i = 3, j, k;

   if (i > 0)
      j = 2 + i * i;
   if (j >= 0)
      k = j % i + 2;
   if (k >= 0)
      k = j % i % k; // int k = 11 % 3 % 4;

   std::cout << k;
}