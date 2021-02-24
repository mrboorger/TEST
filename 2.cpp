//
// Created by mrboorger on 05.09.2020.
//

#include <iostream>

int main() {
  long double x = 0;
  std::cout << "Enter x" << std::endl;
  std::cin >> x;
  long double x_square = x * x;
  long double first_number = x * (4 * x_square + 2);
  long double second_number = 3 * x_square + 1;
  std::cout << "4 * x ^ 3 + 3 * x ^ 2 + 2 * x + 1 = "
            << first_number + second_number << std::endl;
  std::cout << "-4 * x ^ 3 + 3 * x ^ 2 - 2 * x + 1 = "
            << second_number - first_number << std::endl;
  return 0;
}
