//Example program #1 from Chapter 12 of Absolute Beginner's Guide
//to C, 3rd Edition
//File Chapter12ex1.c

/*This program defines a series of variables and expressions and
then uses both relational and logistical operators to treat them against
each other. */

#include <stdio.h>

main()
{

//set up some common integers for the program

int planets = 8;
int friends = 1;
int potterBooks = 17;
int starWars = 16;
int months = 12;
int beatles = 4;
int avengers = 6;
int baseball = 9;
int basketball = 5;
int football = 11;

//The first logical statement uses the AND operator to test
//whether the cast of Friends and the Beatles would have
//enough people to fiend a football team.  If so, the statements will print.

if ((friends + beatles >= baseball) &&
    (friends + avengers >= football))

{

printf("The cast of Friends and the Beatles ");
printf("could make a baseball team, \n");
printf("AND the cast of Friends plus the Avengers ");
printf("could make a football team.\n");
}

else
{

printf("Either the Friends cannot make a ");
printf("baseball team with the Fab Four, \n");
printf("OR they can't make a Gridiron Gang with the ");
printf("Avengers (or both!)\n");

}

//The second logical statement uses the OR operator to test
//whether the number of Star Wars movies is less than months
//in the year OR the number of Harry Potter books is less than
//months in the year.  If either statement is true,
//the statements will print.

if ((starWars <= months) || (potterBooks <= months))

{

printf("\nYou could read one Harry Potter book a month. \n");
printf("And finished them all in less than a year, \n");
printf("OR you could see one Star Wars movie a month. \n");
printf("and finish them all in less than a year. \n");

}


else

{

printf("Neither can happen--too many books or movies. \n");
printf("Not enough time!\n\n");

}

//The final logical statement uses the NOT operator to test
//whether the number of baseball players on a team added
//to the number of basketball players on a team is NOR
//greater than the number of football players on
//a team.  If so, the statements will print.

if (!(baseball + basketball > football))

{
printf("\nThere are fewer baseball and basketball players\n");
printf("combined than football players.");

}

return 0;

}
