#include <stdio.h>

// Create a function
int calculateSum(int a, int b) {
 
  int sum = a + b;
  //printf("The sum of x + y is: %d", sum);
  return sum;
}

int main() {
  calculateSum(23, 20);  // call the function
  return 0;
}