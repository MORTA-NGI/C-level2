#include <stdio.h>

// Create a function
int calculateSum(int x, int y, int z) {
int sum;
 if (x>y && x>z){
  int sum = x + y+z;
 }

  return sum;
}

int main() {
  int num1, num2, num3;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  printf(" the sum is : \t %d",calculateSum(num1, num2, num3));   // call the function
  return 0;
}