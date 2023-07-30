#include <iostream>

using namespace std;

struct Rectangle
{
   int length;
   int width;
};

int main()
{
   Rectangle *p;
   p = new Rectangle; // Creates Rectangle object in HEAP
                      // Dynamic allocation of structure

   p->length = 15;
   p->width = 7;

   cout << p->length << endl;
   cout << p->width << endl;
}
