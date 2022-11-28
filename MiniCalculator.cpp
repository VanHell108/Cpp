#include <iostream>

int main()
{

     char op;
     double num1;
     double num2;
     double result;

     std::cout << "******** CALCULATOR ********\n";
     std::cout << "Enter either (+ - * /): ";
     std::cin >> op;
     std::cout << "Enter first number: ";
     std::cin >> num1;
     std::cout << "Enter second number: ";
     std::cin >> num2;

     switch (op)
     {
     case '+':
          result = num1 + num2;
               std::cout << "Your result is: " << result;
          break;
     case '-':
          result = num1 - num2;
               std::cout << "Your result is: " << result;
          break;
     case '/':
          result = num1 / num2;
               std::cout << "Your result is: " << result;
          break;
     case '*':
          result = num1 * num2;
               std::cout << "Your result is: " << result;
          break;
     default:
     std::cout << "You entered something else";
          break;
     }

     std::cout << "\n****************************";

     return 0;
}