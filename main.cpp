#include <iostream>

int main()
{
   int i = 3, j = 2, k = -1;

   if (i > 0)
   {
      if (j <= 0)
      {
         if (k < 0)
            k++;
         if (k <= 0)
            k--;
      }
      if (j > 0)
         i++;
   }
   if (i <= 0)
      j++;
   std::cout << i + j + k;
}