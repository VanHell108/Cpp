#include <iostream>
#include <string>
#include <ctime>

int main()
{

     int num;
     int guess;
     int tries;

     srand(time(0));

     num = (rand() % 20) + 1;

     std::cout << "******** NUMBER GUESSING GAME ********\n";

     do
     {
          std::cout << "\nGuess a number from 1 to 20: ";
          std::cin >> guess;

          std::cin.clear();
          fflush(stdin);

          tries++;

          if (guess > num)
          {
               std::cout << "It's lower than that!\n";
          }
          else if (guess < num)
          {
               std::cout << "It's higher than that!";
          }
          else
          {
               std::cout << "You won!\nNumber of tries: "
                         << tries;
          }
     } while (guess != num);

     std::cout << "\n**************************************";

     return 0;
}