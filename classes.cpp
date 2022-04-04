#include <iostream>
#include <string>
//another comment
/*
bigger comment
*/
using namespace std;
//this is a fantastic comment
class Car {
  public:
    string brand;
    string model;
    int year;
    void myMethod();   // Method/function declaration
    int speed(int maxSpeed);
    Car() {     // Constructor
      cout << "Hello World!";
    }
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
  private:   // Private access specifier
    int y;   // Private attribute
};

// Method/function definition outside the class
void Car::myMethod() {
  cout << "Hello World!";
}

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

  Car myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  cout << myObj.speed(200); // Call the method with an argument

  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

  return 0;
}
