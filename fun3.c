#include <stdio.h>

// Create a function
void myFunction() {
  printf("I just got executed!\n");
}

int main() {

    int i;
    for ( i = 0; i < 5; i++)
    {
        myFunction();
    }
    
  return 0;
}