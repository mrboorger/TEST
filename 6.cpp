//
// Created by mrboorger on 05.09.2020.
//

#include <iostream>

int main() {
  long double x = 0;
  long double y = 0;
  std::cout << "Enter x and y" << std::endl;
  std::cin >> x >> y;
  if ((x < 0) || (y < 0) || (x > 100) || (y > 100)) {
    std::cout << "Point outside the square" << std::endl;
  }

  long long ans = 0;

  if (x < 100 - x) {
    ans += x;
  } else {
    ans += 100 - x;
  }

  if (y < 100 - y) {
    ans += y;
  } else {
    ans += 100 - y;
  }

  std::cout << "The distance from point to the square is "
            << ans << std::endl;
  return 0;
}