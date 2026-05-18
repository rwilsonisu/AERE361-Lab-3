#include <stdio.h>

// Function for main to call
void hello2(void);

// Creating main function
int main(void) {
  hello2(); /*calls function*/
  return 0;
}/*end main*/

//Defining hello2() function
void hello2(void) {
  printf("Hello World\n");
}/*end normally*/
