#include <iostream>

std::string concatStrings(std::string string1, std::string string2); // make sure to have Return type of the data type

int main()
{
    std::string firstName = "Yun";
    std::string lastName = "Jang";
    std::string fullName = concatStrings(firstName, lastName); // using arguments while invoking the function

    std::cout << "Hello " << fullName;
}

std::string concatStrings(std::string string1, std::string string2)
{ // make sure to have Return type of the data type
    return string1 + " " + string2;
}