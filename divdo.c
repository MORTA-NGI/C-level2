#include <stdio.h>

// Create a function
double calculateSum(int x, int y) {

  double div = x/y;
  return div;
}

int main() {
  int x = 500;
  int y = 100;
  printf(" the sum of x and y is : \t %.2lf",calculateSum(x,y));   // call the function
  return 0;
}