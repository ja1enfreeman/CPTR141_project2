#include "functions.h"
#include <iostream>

int main() {
  // Take user input
  int num1, num2;
  std::cout << "Enter two positive integers: ";
  std::cin >> num1 >> num2;

  // Perform Russian Peasant multiplication
  int result = russianPeasantMultiply(num1, num2);

  // Print the results in columns with comments
  printHeader();
  printRow(num1, num2);
  std::cout << "-----------------------\n";
  std::cout << "Result:\t\t" << result << std::endl;
  std::cout << "-----------------------\n";
  std::cout << "\n";

  return 0;
}
