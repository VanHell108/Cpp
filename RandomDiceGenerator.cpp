#include <iostream>
#include <string>
#include <ctime>

int main()
{

     srand(time(NULL));

     int num1 = (rand() % 20) + 1;
     int num2 = (rand() % 20) + 1;
     int num3 = (rand() % 20) + 1;

     std::cout << num1 << '\n';
     std::cout << num2 << '\n';
     std::cout << num3 << '\n';

     return 0;
}