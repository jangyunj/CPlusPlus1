#include <iostream>

class Cookie
{
private:
    string color;

public:
    Cookie(string color)
    {
        this->color = color;
    }
};

Cookie *cookieOne = new Cookie("green");
Cookie *cookieTwo = new Cookie("blue");

int main()
{
}