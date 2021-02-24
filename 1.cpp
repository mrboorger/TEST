#include <iostream>

int main() {
  long double x = 0;
  long double y = 0;
  std::cout << "Enter x and y" << std::endl;
  std::cin >> x >> y;
  if (x == y * y) {
    std::cout << "Error. Division by zero" << std::endl;
  } else {
    std::cout << "The expression is equal to "
              << (3 + x * x - y * y * y) * (3 + x) * (3 + x) / (x - y * y)
              << std::endl;
  }
  return 0;
}
