#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 100;
    int choice = 0;

    do
    {
        std::cout << "*****************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "*****************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting!\n";
            break;
        default:
            std::cout << "Invalid choice\n";
        }
    } while (choice != 4);
}
void showBalance(double balance)
{
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit()
{
}
double withdraw(double balance) {}