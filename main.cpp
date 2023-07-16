#include <iostream>

int main()
{
   int i = 1;
   int j = ++i;
   int k = j++;

   std::cout << i;
   std::cout << j;
   std::cout << k;
}