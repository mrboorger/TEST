//
// Created by mrboorger on 05.09.2020.
//

#include <iostream>

int main() {
  int day = 0;
  int month = 0;
  int year = 0;
  std::cout << "Enter the date" << std::endl;
  std::cin >> day >> month >> year;
  if (day < 1 || month < 1 || month > 12 || year < 1) {
    std::cout << "Invalid date" << std::endl;
    return 0;
  }
  --month;

  int is_leap = 0; // 1 - leap, 0 - not leap

  if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))) {
    is_leap = 1;
  }

  int count_of_days_in_month = 0;

  switch (month) {
    case 0: {
      count_of_days_in_month = 31;
      break;
    }
    case 1: {
      count_of_days_in_month = 28 + is_leap;
      break;
    }
    case 2: {
      count_of_days_in_month = 31;
      break;
    }
    case 3: {
      count_of_days_in_month = 30;
      break;
    }
    case 4: {
      count_of_days_in_month = 31;
      break;
    }
    case 5: {
      count_of_days_in_month = 30;
      break;
    }
    case 6: {
      count_of_days_in_month = 31;
      break;
    }
    case 7: {
      count_of_days_in_month = 31;
      break;
    }
    case 8: {
      count_of_days_in_month = 30;
      break;
    }
    case 9: {
      count_of_days_in_month = 31;
      break;
    }
    case 10: {
      count_of_days_in_month = 30;
      break;
    }
    case 11: {
      count_of_days_in_month = 31;
      break;
    }
  }

  if (day > count_of_days_in_month) {
    std::cout << "Invalid date" << std::endl;
    return 0;
  }
  std::cout << "Valid date" << std::endl;
  return 0;
}