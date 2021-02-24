//
// Created by mrboorger on 05.09.2020.
//

#include <iostream>

int main() {
  long long x = 0;
  long long y = 0;
  std::cout << "Enter x and y" << std::endl;
  std::cin >> x >> y;

  if (y < 0) {
    y = -y;
  }

  bool negative = false;

  if (x < 0) {
    x = -x;
    negative = true;
  }
  x <<= 5;

  long long ans = x & ((1ll << y) - 1);
  if (negative) {
    ans = (1ll << y) - ans;
  }

  std::cout << "(32 * x) mod (2 ^ |y|) = " << ans << std::endl;
  return 0;
}