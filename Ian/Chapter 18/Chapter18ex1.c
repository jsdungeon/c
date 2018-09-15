//Example program #1 from Chapter 18 of Absolute Beginner's Guide
//to C, 3rd Edition
//File Chapter18Ex1.c

/* This program is nothing more than a simple demonstration of the
putchar() function */


//putchar() is defined in stdio.h but string.h is needed for the
//strlen() functin

#include <stdio.h>
#include <string.h>

main()

{

int i;
char msg[] = "C is fun";

for (i = 0; i < strlen(msg);i++)

{

  putchar(msg[i]); //Outputs a single character

}

putchar('\n'); //One line break after the loop is done

return(0);

}
