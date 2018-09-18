//Example program #2 from Chapter 19 of Absolute Beginner's Guide
//to C, 3rd Edition
//File Chapter19ex2.c

/* This program asks a user for their hometown and the two-letter
abbreviation of their home state.  It then uses string concatenation
to build a new string with both town and state and prints it using
puts/ */

//stdio.h is needed for puts() and gets()
//string.h is needed for strcat()

#include <stdio.h>

main()

{

char city[15];
//2 chars for the state abbreviation, and one for the null zero
char st[3];
char fullLocation[18] = "";

puts("What town do you live in? ");
gets(city);

puts("What state do you live in? (2-letter abbreviation)");
gets(st);

/* Concatenates the strings */
strcat(fullLocation, city);
strcat(fullLocation, ", "); //Adds a comma and space between the city
strcat(fullLocation, st); //and the state abbreviation

puts("\nYou live in ");
puts(fullLocation);
return(0);


}
