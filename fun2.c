#include <stdio.h>

// Create a function
void myFunction() {
  printf("I just got executed! 1\n");
}

int main() {
  int i;
  for ( i = 0; i < 5; i++)
  {
 myFunction(); // call the function
  }
  
  return 0;
 
}