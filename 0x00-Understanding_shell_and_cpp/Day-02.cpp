#include <iostream>

int main() {

  double weight;
  int y;

  std::cout << "Please enter your current earth weight: \n";
  std::cin >> weight;

  std::cout << "We have information for the following planets.\n";
  std::cout << "1. Mercury.\n";
  std::cout << "2. Venus.\n";
  std::cout << "3. Mars.\n";
  std::cout << "4. Jupiter.\n";
  std::cout << "5. Saturn.\n";
  std::cout << "6. Uranus.\n";
  std::cout << "7. Neptune.\n";

  std::cout << "Enter a number for the planet you wish to fight on: \n";
  std::cin >> y;

  if (y == 1) {
    weight = weight * 0.38;
  } else if (y == 2) {
    weight = weight * 0.91;
  } else if (y == 3) {
    weight = weight * 0.38;
  } else if (y == 4) {
    weight = weight * 2.34;
  } else if (y == 5) {
    weight = weight * 1.06;
  } else if (y == 6) {
    weight = weight * 0.92;
  } else if (y == 7) {
    weight = weight * 1.19;
  } else {
    weight = weight * 0;
  }

  std::cout << "Your weight: " << weight << "\n"; 
}
