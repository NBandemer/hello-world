#include <stdio.h>
main() {
  int number = 0; 
  int* numberptr = &number;
  printf("Hello World!\n");
  printf("changes\n");
  printf("Now we are gonna do some more interesting stuff\n")
  scanf("Enter a number: %d", numberptr);
  printf("\nYour number was: %d", number);
   return 0;
}
