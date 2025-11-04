// Main Program 

#include "MathOps.h"

int main() {
  int x = 20, y = 5;
  int resultInt;
  float resultFl;

  // Addition
  add(&x, &y, &resultInt);
  printf("Addition      : %d\n", resultInt);
  // Subtraction
  sub(&x, &y, &resultInt);
  printf("Subtraction   : %d\n", resultInt);
  // Multiplication
  mul(&x, &y, &resultInt);
  printf("Multiplication: %d\n", resultInt);
  // Division
  div(&x, &y, &resultFl);  
  printf("Division      : %.2f\n", resultFl);
  
  return 0;
}
