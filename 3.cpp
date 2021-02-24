//
// Created by mrboorger on 05.09.2020.
//

#include <iostream>

int main() {
  int x = 0;
  int y = 0;
  std::cout << "Enter x and y" << std::endl;
  std::cin >> x >> y;
  if (!((x == 0) && (y == 0)) &&
      ((x == 0) || (y == 0) || (x % y == 0) || (y % x == 0))) {
    std::cout << "Yes. One of the numbers is divided by"
                 " the other without remainder" << std::endl;
  } else {
    std::cout << "No. None of the numbers is divisible"
                 " by another without remainder" << std::endl;
  }
  return 0;
}