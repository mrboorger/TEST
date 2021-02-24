//
// Created by mrboorger on 05.09.2020.
//

#include <iostream>
#include <cmath>

int main() {
  long double AB;
  long double AC;
  long double A;
  std::cout << "Enter lengths of two sides and "
               "degree measure of the angle" << std::endl;
  std::cin >> AB >> AC >> A;
  if ((AB <= 0) || (AC <= 0) || (A <= 0) || (A >= 180)) {
    std::cout << "Invalid triangle" << std::endl;
    return 0;
  }
  A *= acos(-1) / 180; // concert to rad
  // low of cosines
  long double answer = AB * AB + AC * AC - 2 * AB * AC * std::cos(A);
  std::cout << answer << std::endl;
  return 0;
}

// change
