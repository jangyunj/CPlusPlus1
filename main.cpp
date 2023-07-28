#include <iostream>

using namespace std;

struct Rectangle
{
   int length;
   int width;
}; // r1, r2, r3; <- you can also declare variables here

int main()
{
   struct Rectangle r1 = {10, 5};

   // printf("Hello world");
   printf("%d", sizeof(r1)); // length and width are ints and 4 bytes each
}