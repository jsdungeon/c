//Example program #1 from Chapter 14 of Absolute Beginner's Guide
//to C, 3rd Edition
//File Chapter14ex1.c

#include <stdio.h>

main()
{

int ctr = 0;

while (ctr < 5)
{

printf("Counter is at %d.\n", ++ctr);

}

while (ctr > 1)

{

printf("Counter is at %d.\n", --ctr);

}

return 0;

}
