//**********************************//
// Adrian Borrego  04/17/16         //
//                                  //
// records.c: driver program that   //
// includes all header files and    //
// runs functions.                  //
//**********************************//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "dogs.h"
#include "readline.h"

/**********************************************************
 * main: Prompts the user to enter an operation code,     *
 *       then calls a function to perform the requested   *
 *       action. Repeats until the user enters the        *
 *       command 'q'. Prints an error message if the user *
 *       enters an illegal code.                          *
 **********************************************************/
int main(void)
{
  char code;

  struct dog *dog_list = NULL;  
  printf("Operation Code: a for appending to the list, s for finding a dog"
	  ", p for printing the list, d for deleteing a dog from list; q for quit.\n");
  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')   /* skips to end of line */
      ;
    switch (code) {
      case 'a': dog_list = append(dog_list);
                break;
      case 's': search(dog_list);
                break;
      case 'p': print(dog_list);
                break;
      case 'd': delete_from_list(dog_list);
                break;
      case 'q': clear(dog_list);
		return 0;
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }
}