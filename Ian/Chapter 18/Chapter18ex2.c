//Example program #2 from Chapter 18 of Absolute Beginner's Guide
//to C, 3rd Edition
//File Chapter18ex2.c

/* This program is nothing more than a simple demonstration of the
getchar() function. */


//getchar() is defined in stdio.h, but string.h is neede for the
//strlen() function

#include <stdio.h>
#include <string.h>

main()

{

int i;
char msg[25];

printf("Type up to 25 characters and then press Enter...\n");
for (i = 0; i < 25; i++)
{

 msg[i] = getchar(); //Outputs a single character
  if(msg[i] == '\n')
        {
            i--; //Loop will stop when user presses Enter
            break;
        }

}

putchar('\n'); //One line break after the loop is done.

for (; i >=0; i--)

{

  putchar(msg[i]);

}

putchar('\n');

return (0);

}
