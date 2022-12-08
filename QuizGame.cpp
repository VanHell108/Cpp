#include <iostream>

int main()
{

     std::string questions[] = {"1. What year was C++ created?: ",
                                "2. Who invented C++?: ",
                                "3. What is the predecessor of C++?: ",
                                "4. Is the Earth flat?: "};

     std::string options[][4] = {{"a. 1969", "b. 1975", "c. 1985", "d. 1989"},
                                 {"a. Guido van Rossum", "b. Bjarne Stroustrup", "c. John Atanasov", "d. Elon Musk"},
                                 {"a. C", "b. C+", "c. C--", "d. B++"},
                                 {"a. Yes", "b. No", "c. Sometimes", "d. What's Earth?"}};

     char answerKey[] = {'c', 'b', 'a', 'b'};

     int size = sizeof(questions) / sizeof(questions[0]);
     char guess;
     int score;

     for (int i = 0; i < size; i++)
     {
          std::cout << "***********************************\n\n";
          std::cout << questions[i] << "\n";
          std::cout << "***********************************\n";

          for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
          {
               std::cout << options[i][j] << "\n";
          }

          std::cin >> guess;
          guess = tolower(guess);

          if (guess == answerKey[i])
          {
               std::cout << "CORRECT!\n";
               score++;
          }
          else
          {
               std::cout << "WRONG!\n";
               std::cout << "Correct answer is " << answerKey[i] << '\n';
          }
     }

     std::cout << "***********************************\n";
     std::cout << "*             RESULTS             *\n";
     std::cout << "***********************************\n";
     std::cout << "CORRECT GUESSES: " << score << '\n';
     std::cout << "# of QUESTIONS: " << size << '\n';
     std::cout << "SCORE: " << (score / (double)size) * 100 << "%";

     return 0;
}