#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

     double balance = 0;
     int choice = 0;

     do
     {
          std::cout << "*******************\n";
          std::cout << " 1. Show Blance\n"
                    << " 2. Deposit Money\n"
                    << " 3. Withdraw Money\n"
                    << " 4. Exit\n";
          std::cout << "*******************\n";
          std::cout << "Please enter the number(1-4) of the option you want to use: ";
          std::cin >> choice;

          std::cin.clear();
          fflush(stdin);

          switch (choice)
          {
          case 1:
               showBalance(balance);
               break;
          case 2:
               balance += deposit();
               showBalance(balance);
               break;
          case 3:
               balance -= withdraw(balance);
               showBalance(balance);
               break;
          case 4:
               std::cout << "\nHave a nice day!\n";
               break;
          default:
               std::cout << "\nInvalid choice!\n";
               break;
          }
     } while (choice != 4);

     return 0;
}

void showBalance(double balance)
{
     std::cout << "\nYour balance: " << std::setprecision(2) << std::fixed << balance << " $\n";
}

double deposit()
{
     double depSum;
     std::cout << "\nWrite the sum you want to deposit: ";
     std::cin >> depSum;

     if (depSum > 0)
     {
          return depSum;
     }
     else
     {
          std::cout << "\nThat's not a valid amount!";
          return 0;
     }
}

double withdraw(double balance)
{
     double drawSum;
     std::cout << "\nWrite the sum you want to withdraw: ";
     std::cin >> drawSum;

     if (drawSum > balance)
     {
          std::cout << "\nInsufficient funds!";
          return 0;
     }
     else if(drawSum <= 0){
          std::cout << "\nThat's not a valid amount!";
          return 0;
     }
     else{
     return drawSum;
     }
}