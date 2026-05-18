#include <stdio.h>

/* Program that loops 6 times, prompting user for an
   integer and checking that it is one. Terminates
   with error message if not an integer.
*/

int main(void) {
  int count = 0;
  int num;
  int chars;
  char other[100]; //creates array for "other" char that holds up to 100 characters

  while(count < 6) { //loops 6 times
    if(count == 0) { //starts checking loop when count is at 0
      
      printf("Hello! Please give me an integer: ");
      
    } //end if
    else {
      
      printf("Thanks! Please give me another integer: ");
      
    } //end else

    fgets(other, sizeof(other), stdin); //reads strings from char array "other" as standard input
    if(sscanf(other, "%d%n", &num, &chars) != 1 || other[chars] != '\n') {
    /* != 1 means that any input that is NOT an integer or new line will prompt
       the error message. "other[chars]" looks for strings after an integer input
       such as a decimal or a space.
    */
      
      printf("Error: Not an integer.\n");
      return 1; //non-zero return terminates loop
      
    } //end if
    
    count = count + 1; //iterates to next count value in loop
  } //end while

  printf("Thanks! I am happy with six integers.\n");
  return 0;
} //end main
