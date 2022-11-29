#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

char getPlayerChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{

     char player;
     char computer;

     player = getPlayerChoice();
     std::cout << "You'r choice: ";
     showChoice(player);

     computer = getComputerChoice();
     std::cout << "Computer's choice: ";
     showChoice(computer);

     chooseWinner(player, computer);

     return 0;
}

char getPlayerChoice()
{

     char player;
     std::cout << "\nRock-Paper-Scissors Game!\n";

     do
     {
          std::cout << "Choose one of the following\n";
          std::cout << "*************************\n";
          std::cout << "'r' for Rock\n";
          std::cout << "'p' for Paper\n";
          std::cout << "'s' for Scissors\n";
          std::cout << " > ";
          std::cin >> player;
     } while (player != 'r' && player != 'p' && player != 's');

     return player;
}

char getComputerChoice()
{

     srand(time(0));
     int num = rand() % 3 + 1;

     switch (num)
     {
     case 1:
          return 'r';
          break;
     case 2:
          return 'p';
          break;
     case 3:
          return 's';
          break;
     }

     return num;
}

void showChoice(char choice)
{
     switch (choice)
     {
     case 'r':
          std::cout << "Rock\n";
          break;
     case 'p':
          std::cout << "Paper\n";
          break;
     case 's':
          std::cout << "Scissors\n";
          break;
     }
}

void chooseWinner(char player, char computer)
{
     switch (player)
     {
     case 'r':
          if (computer == 'r')
          {
               std::cout << "It's a tie!";
          }
          else if (computer == 'p')
          {
               std::cout << "Computer won!";
          }
          else
          {
               std::cout << "You won!";
          }
          break;
     case 'p':
          if (computer == 'r')
          {
               std::cout << "You won!";
          }
          else if (computer == 'p')
          {
               std::cout << "It's a tie!";
          }
          else
          {
               std::cout << "Computer won!";
          }
          break;
     case 's':
          if (computer == 'r')
          {
               std::cout << "Computer won!";
          }
          else if (computer == 'p')
          {
               std::cout << "You won!";
          }
          else
          {
               std::cout << "It's a tie!";
          }
          break;
     }
}