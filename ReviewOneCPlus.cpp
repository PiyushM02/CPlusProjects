#include <iostream>

//Piyush Malik
//September 21, 2023

/* 
    This is a program that takes input from the user and gets the weight of an item from Earth and computes the weight if
    were to be on Mars.
*/

int main() {

  double weight;
  double gravityMars = 3.73;
  double gravityEarth = 9.81;
  double marsWeight;
    
  // Input method to get the weight of the item.
  std::cout << "Enter the weight of the item: ";
  std::cin >> weight;

  // Computing the weight of the object on Mars
  marsWeight = (weight * gravityMars) / gravityEarth;

  std::cout << "The weight on mars of the item would be: " << marsWeight << "." << "\n";
}
