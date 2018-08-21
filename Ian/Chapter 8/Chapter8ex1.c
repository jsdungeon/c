//Example program #1 from Chapter 8 of Absolute Beginner's Guide to
//C. 3rd Edition
//File Chapter8ex.1.c

#include<stdio.h>
main()
{

//set up variables that scanf will fill

char firstInitial;
char lastInitial;
int age;
int favourite_number;

printf("Which letter does your first name begin with?\n");
scanf("%c", &firstInitial);

printf("Which letter does your last name begin with?\n");
scanf(" %c", &lastInitial);

printf("How old are you?\n");
scanf(" %d", &age);

printf("What is your favourite number (integer only)?\n");
scanf(" %d", &favourite_number);

printf("\nYour initals are %c.%c. and you are %d years old",
firstInitial, lastInitial, age);

printf("\nYour favourite number is %d.\n\n", favourite_number);

return 0;


}
