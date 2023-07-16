#include <iostream>
#include <vector>

int main()
{
   std::vector<char> arr = {'a', 'b', 'c'};

   for (int i = 1; i < arr.size(); i++)
   {
      std::cout << "*";
      if ((arr[i] - arr[i - 1]) % 2)
         continue;
      std::cout << "*";
   }
}