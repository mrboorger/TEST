//
// Created by mrboorger on 05.09.2020.
//

#include <iostream>

int main() {
  int hours = 0;
  std::cout << "Enter count of hours" << std::endl;
  std::cin >> hours;
  if (hours < 0 || hours > 23) {
    std::cout << "Invalid number of hours" << std::endl;
    return 0;
  }
  if ((hours == 23) || (hours < 6)) {
    std::cout << "It is night now" << std::endl;
  } else if (hours > 5 && hours < 11) {
    std::cout << "It is morning now" << std::endl;
  } else if (hours > 10 && hours < 18) {
    std::cout << "It is day now" << std::endl;
  } else {
    std::cout << "It is evening now" << std::endl;
  }
  return 0;
}