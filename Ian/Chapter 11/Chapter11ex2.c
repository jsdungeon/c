//Example program #2 from Chapter 11 of Absolute Beginner's Guide
//to C, 3rd Edition
//File Chapter11ex2.c

/* This program asks the user for their birth year and calculates
how old they will be in the current year.  (it also checks to make
sure a future year has not been entered).  It then tells the user if
they were born in a leap year. */

#include <stdio.h>
#define CURRENTYEAR 2018

main()
{

int yearBorn, age;

printf("What year were you born?\n");
scanf("%d", &yearBorn);

//This statement can do some data validation, making sure
//the year makes sense
//The statements will only execute if the year is after the
//current year.

if (yearBorn > CURRENTYEAR)
{

printf("Really?. You haven't been born yet?\n");
printf("Congratulations on time travel!\n");

}

else

{

age = CURRENTYEAR - yearBorn;

printf("\nSo this year you will turn %d on your birthday!\n", age);

//The second if statement uses the modulus operator to test
//if the year of
//birth was a Leap Year.  Again, only if it is will the code
//execute

if ((yearBorn %4) == 0)
{
printf("\nYou were born in a Leap Year -- Cool!\n");

}

}

return 0;
}
