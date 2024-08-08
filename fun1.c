#include <stdio.h>
// Create a function
void myFunction();

int main() {
  myFunction(); 
  printf("\n");
  printf("Today we use function 1 !! \n");
  printf("Today we use function 2 !!");
  return 0;
}

void myFunction() {
  int i=4;
  if (i<2)
    printf("I just got executed!");

}