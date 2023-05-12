#include <iostream>

int russianPeasantMultiply(int num1, int num2) {
  int result = 0;
  bool neg;
  // If either number is negative...
  // If both are negative, call the absolute value of both numbers
  // since a neg * neg = pos
  if ((num1 < 0) && (num2 < 0)){
    num1 = abs(num1);
    num2 = abs(num2);
    neg = false;
  }
  // If one number is neg, bool neg = true
  if ((num1 > 0) && (num2 < 0)){
    num1 = abs(num1);
    num2 = abs(num2);
    neg = true;
  } else{
    neg = false;
  }

  if ((num1 < 0) && (num2 > 0)){
    num1 = abs(num1);
    num2 = abs(num2);
    neg = true;
  } else{
    neg = false;
  }

  // If num1 is odd, add it to the result
  if (num1 % 2 != 0) {
    result += num2;
  }

  // Double num1 and halve num2 until num1 is 1
  while (num1 > 1) {
    num1 /= 2;
    num2 *= 2;

    // If num1 is odd, add num2 to the result
    if (num1 % 2 != 0) {
      result += num2;
    }
  }
  if (neg == true){
      // If neg = true, multiply result by -1 to create a negative value
      result = result * -1;
  }

  return result;
}

void printHeader() {
  std::cout << "\n";
  std::cout << "-----------------------\n";
  std::cout << "RUSSIAN PEASANT ALGORITHM\n";
  std::cout << "-----------------------\n";
  std::cout << "Num1\tNum2\tOperation\n";
  std::cout << "\n";
}

void printRow(int num1, int num2) {
  std::cout << num1 << "\t" << num2 << "\tInitial values\n";

  while (num1 > 1) {
    num1 /= 2;
    num2 *= 2;

    // If num1 is odd, add num2 to the result
    if (num1 % 2 != 0) {
      std::cout << num1 << "\t" << num2 << "\tNum1 is odd, so add num2 to result.\n";
    } else {
      std::cout << num1 << "\t" << num2 << "\tNum 1 is even, so ignore num2.\n";
    }

  }
}
