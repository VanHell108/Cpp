#include <iostream>

// class Animal{
//      public:
//           bool alive = true;
//      void eat(){
//           std::cout << "Nom nom nom!\n";
//      }
// };
// class Dog : public Animal{
//      public:
//           void bark(){
//                std::cout << "WOOF WOOF!\n";
//           }
// };
// class Cat : public Animal{
//      public:
//           void meow(){
//                std::cout << "Meow Meow!\n";
//           }
// };

class Shape{
     public:
          double area;
          double volume;
};
class Cube : public Shape{
     public:
          double side;
          Cube(double side){
               this->side = side;
               this->area = side * side * 6;
               this->volume = side * side * side;
          }
};
class Sphere : public Shape{
     public:
          double radius;
          Sphere(double radius){
               this->radius = radius;
               this->area = 4 * 3.14159 * (radius * radius);
               this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);
          }
};

int main(){

     Cube cube(10);
     Sphere sphere(15);

     std::cout << "Cube Area: " << cube.area << "cm\n";
     std::cout << "Cube Volume: " << cube.volume << "cm\n";

     std::cout << "Sphere Area: " << sphere.area << "cm\n";
     std::cout << "Sphere Volume: " << sphere.volume << "cm\n";

     // Dog dog;
     // Cat cat;

     // std::cout << "Dog:\n";
     // std::cout << dog.alive << '\n';
     // dog.eat();
     // dog.bark();

     // std::cout << "Cat:\n";
     // std::cout << cat.alive << '\n';
     // cat.eat();
     // cat.meow();

     return 0;
}