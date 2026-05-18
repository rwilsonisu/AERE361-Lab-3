#include <stdio.h>
#include <ctype.h>

/* Program that asls for an integer 'n' and loops n times,
   prompting user for a char each time. Terminates if not a char.
*/

int main(void) {
  int count = 0;
  int n;
  char str[100];

  printf("Hello! How many chars should I take? ");
  if(scanf("%d", &n) != 1 || n <= 0) {
    printf("Error: not an allowed number of chars.\n");
    return 1;
  }
  getchar();
  
  while(count < n) {
    if(count == 0) {
      printf("Please give me a char: ");
    } //end if
    else {
      printf("Thanks! Please give me another char: ");
    } //end else

    fgets(str, sizeof(str), stdin); //reads strings from char array "other" as standard input
    
    if(str[0] == '\n' || str[1] != '\n' || !isalpha(str[0])) {
      /* checks only first character entered and
	 prompts error if anything besides a single char
      */
      printf("Error: not a char.\n");
      return 1; //non-zero return terminates loop
      
    } //end if
    
    count = count + 1; //iterates n to next value
    
  } //end while
  
  printf("Thanks! I am happy with %d chars.\n", n);
  return 0;
  
} //end main
   
