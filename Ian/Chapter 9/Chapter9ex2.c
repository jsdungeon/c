//Example program #2 from Chapter 9 of Absolute Beginner's Guide to
//C, 3rd Edition
//File Chapter9ex2.c

/* This program asks the user for a number of tires and price per
tyre.  It then calculates a total price, adding sales tax */

//If you find you use s sales tax rate that may change, use #define
//to set it in one place.

#include <stdio.h>
#define SALESTAX 07 //Everywhere SALESTAX is used will be 0.7

main()
{

//Variables for the number of tyres puchased, price,
//a before-tax total, and a total cost
//with tax

int numTyres;
float tyrePrice, beforeTax, netSales;

/* Get the number of tyres purchased and price per tyre */
printf("How many tyres did you purchase? ");
scanf("%d", &numTyres);
printf("What was the cost per tyre (enter in $XX.XX format)? ");
scanf(" $%f", &tyrePrice); //if you don't include the space from the " then program breaks

/* Compute the price */

beforeTax = tyrePrice * numTyres;
netSales = beforeTax + (beforeTax * SALESTAX);

printf("%You spent $%.2f on your tyres\n\n\n", netSales);

return 0;


}
