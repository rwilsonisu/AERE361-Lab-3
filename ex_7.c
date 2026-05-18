#include <stdio.h>

/* Program that takes an input at runtime
   and determines if it is an integer or not.
   Exits with non-zero error code if it is
   not an integer, and zero if it is an integer.
*/

int main(void){
  int integer; /*sets variable integer to only int values */
  char other; /*sets variable other to char values (anything else)*/

  int num = (scanf("%d%c", &integer, &other));
    // %d scans for integers, %c reads exactly one character
    // & symbol denotes a variable
  
  /*if/else loop to check for integers/non-integers*/
  if(num == 1 || (num == 2 && other == '\n')) {
    printf("That is an integer\n");
    return 0;
  }/*end if*/
  else {
    printf("That is not an integer\n");
    return 1;
  }/*end else*/
}/*end main*/
