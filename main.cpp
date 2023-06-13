#include <iostream>

double getTotal(double prices[], int size);
int main()
{
    double prices[] = {11.00, 50, 40.01};
    int size = sizeof(prices) / sizeof(double);
    double total = getTotal(prices, size);

    std::cout << "$" << total;
}

double getTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}