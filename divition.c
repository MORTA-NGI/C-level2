#include <stdio.h>

// Create a function
float calculatediv(int x, int y) {

  float div = x/y;
  return div;
}

int main() {
  int x = 5000;
  int y = 102;
  printf(" the divition of x and y is : \t %f",calculatediv(x,y));   // call the function
  return 0;
}