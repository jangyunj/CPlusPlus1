#include <iostream>

using namespace std;

int main()
{
   int a = 10;
   int &r = a; // REFERNCES needs to be initialized at the time of declaration
               // Another name for a variable
               // r is a
               // r does not consume memory - same memory as a

   int b = 30;
   r = b; // Now r is changed to 30, so a is also 30

   cout << a << endl
        << r;
}
