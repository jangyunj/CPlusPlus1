#include <iostream>

using namespace std;

struct Rectangle
{
   int length;
   int width;
};

int main()
{
   int A[5] = {2, 4, 6, 8, 10}; // created in Stack
   int *p;

   p = A; // Arrays don't need &
          // OR p = &A[0];

   for (int i = 0; i < 5; i++)
   {
      cout << p[i];
   }
}