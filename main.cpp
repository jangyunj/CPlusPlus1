#include <iostream>

using namespace std;

void swap(int *x, int *y)
{ // Indirectly accessing address of num1, num2
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}

int main()
{
   int num1 = 10, num2 = 15;
   swap(&num1, &num2); // Address of actual parameters are passed because the formal parameters are pointers

   cout << "Num1: " << num1 << endl;
   cout << "Num2: " << num2 << endl;
}

void swap(int x, int y)
{
   int temp;
   temp = x;
   x = y;
   y = temp;
}

int main()
{
   int num1 = 10, num2 = 15;
   swap(num1, num2);
   cout << "Num1: " << num1 << endl;
   cout << "Num2: " << num2 << endl;
}
