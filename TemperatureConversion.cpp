#include <iostream>

int main(){

     double temp;
     char unit;

     std::cout << "******** TEMPERATURE CONVERSION ********\n";
     std::cout << "F = Fahrenheit\n";
     std::cout << "C = Celsius\n";
     std::cout << "What unit would you like to convert to: ";
     std::cin >> unit;

     if(unit == 'F' || unit == 'f'){
          std::cout << "Enter the temperature in Celsius: ";
          std::cin >> temp;
          std::cout << ( (temp * 1.8) + 32.0) << " F";

     }else if(unit == 'C' || unit == 'c'){
          std::cout << "Enter the temperature in Fahrenheit: ";
          std::cin >> temp;
          std::cout << ((temp - 32.0) / 1.8) << " C";
     }else{
          std::cout << "Please enter right symbols and numbers";
     }

     std::cout << "\n****************************************";

     return 0;
}