#include <iostream>
#include <vector>
//---Reserved keyword used to create additional name for another data type
//--Only use when there is a clear benefit

// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main()
{
    text_t firstName = "bro";
    number_t age = 20;

    std::cout << firstName << '\n';
    std::cout << age << '\n';
}