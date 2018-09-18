//Example program #1 from Chapter 19 of Absolute Beginner's Guide
//to C, 3rd Edition

//File Chapter19ex1.c

/* This program asks a user for a username and password.  It tests
whether their password has an uppercase letter, lowercase letter,
and a digit.  If it does, the program congratulates their selection.
If not, it suggests they want to consider a password with more
variety for the sake of security. */

//stdio.h is needed for printf() and scanf()
//string.h is needed for strlen()
//ctype.h is needed for isdigit, isupper, and islower

#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{

int i;
int hasUpper, hasLower, hasDigit;
char user[25], password[25];

//Initialise all three test variables to 0, i.e. false

hasUpper = hasLower = hasDigit = 0;

printf("What is your username? ");
scanf(" %s", user);

printf("Please create a password: ");
scanf(" %s", password);

//This loop goes through each character of the password and
//tests
//whether it is a digit, uppercase letter, then lowercase
//letter.

for (i = 0; i < strlen(password); i++)
{

if (isdigit(password[i]))
  {

  hasDigit = 1;
  continue;

  }

  if (isupper(password[i]))
    {

    hasUpper = 1;
    continue;

    }


 if (islower(password[i]))

 {

  hasLower = 1;

 }

}


/* The if portion will only execute if all three variables
below are 1, and the variables will only equal 1 if the appropriate
characters were each found */

if ((hasDigit) && (hasUpper) && (hasLower))

  {

  printf("\n\nExcellent work, %s, \n", user);
  printf("Your password has upper and lowercase ");
  printf("letters and a number.");


  } else

  {

    printf("\n\nYou should consider a new password, %s, \n",
    user);
    printf("One that uses upper and lowercase letters ");
    printf("and a number");

  }

  return (0);
}
