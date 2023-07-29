#include <iostream>

using namespace std;

int main()
{
   int *p;
   p = new int[5]; // memory in HEAP
   p[0] = 10;
   p[1] = 15;
   p[2] = 1;

   for (int i = 0; i < 5; i++)
   {
      cout << p[i] << endl;
      delete[] p; // DEALLOCATING the memory allocated in heap- free up the space
   }
}