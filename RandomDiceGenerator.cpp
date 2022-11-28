#include <iostream>
#include <string>
#include <ctime>

int main()
{

     srand(time(NULL));

     int dice1 = (rand() % 20) + 1;
     int dice2 = (rand() % 20) + 1;
     int dice3 = (rand() % 20) + 1;

     std::cout << dice1 << '\n';
     std::cout << dice2 << '\n';
     std::cout << dice3 << '\n';

     return 0;
}