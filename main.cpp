#include <iostream>

using namespace std;

struct Rectangle
{
   int length;
   int width;
};

int main()
{
   Rectangle r = {10, 5};
   cout << r.length << endl; // Normal variable uses dot operator
   cout << r.width << endl;

   Rectangle *p = &r;
   cout << p->length << endl; // Pointer to a structure requires arrow
   cout << p->width << endl;
}