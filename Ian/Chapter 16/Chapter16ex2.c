//Example program #2 from Chapter 16 of Absolute Beginner's Guide
//to C, 3rd Edition
//File Chapter16ex2.c

/* This program loops through 10 numbers and prints a message that
varies whether the program is odd or even.  It tests for odd and
if the number is odd, it prints the odd message and then starts the
next iteration of the loop using continue.  Otherwise, it
prints the even message. */

#include <stdio.h>

main()
{

int i;

//Loops though the numbers 1 to 10

for (i = 1; i <= 10; i++){

if ((i%2) == 1) // Odd numbers have a remainder of 1

{
printf("I'm rather odd..\n");
//Will jump to the next iteration of the loop
continue;
}

printf("Even up!\n");

}
return 0;
}
