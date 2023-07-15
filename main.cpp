#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = ++i, k = j++;
    cout << k << j << i;
}