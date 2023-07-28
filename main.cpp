#include <iostream>

using namespace std;

struct Rectangle
{
   int length;
   int width;
};

int main()
{

   struct Rectangle r1;
   r1.length = 10;
   r1.width = 5;

   cout << r1.length << endl;
   cout << r1.width << endl;
}