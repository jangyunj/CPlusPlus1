#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<string> arr{"apple", "banana", "cherry"};
   int index = 0;
   while (index < arr.size())
   {
      string element = arr.at(index);
      cout << element << endl;
      index++;
   }
}