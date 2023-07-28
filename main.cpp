#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int n;
   cout << "Enter size: ";
   cin >> n;

   int A[n];

   A[0] = 20;
   A[1] = 30;

   for (int x : A)
   {
      cout << x << endl; // Random numbers instead of 0 could be assigned
   }
}