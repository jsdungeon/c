// Example program #1 from Chapter 6 of
// Absolute Beginner's Guide to C, 3rd Edition
// File Chapter6Ex1.c

//This program pairs three kinds with their favourite superhero

# include <stdio.h>
# include <string.h> //Need to include this when working with Strings

main()
{
char Kid1[12];
//Kid can hold an 11-character name
//Kid 2 will be 7 characters (Maddie plus null 0)
char Kid2[] = "Maddie";
//Kid 3 is also 7 characters, but specifically defined
char Kid3[7] = "Andrew";
//Hero1 will be 7 characters, (adding null 0!)
char Hero1[7] = "Batman";
//Hero2 will have extra room just in case
char Hero2[34] = "Spiderman";
char Hero3[25];

Kid1[0] = 'K'; //Kid1 is being defined character-by-character
Kid1[1] = 'a'; //Not efficient, but it works
Kid1[2] = 't';
Kid1[3] = 'i';
Kid1[4] = 'e';
Kid1[5] = '\0'; //Never forget the null 0 so that C knows when the
                //string ends

strcpy(Hero3, "The Incredible Hulk"); //copies "The Incredible Hulk" to the String value of hero3

printf("%s\'s favourite hero is %s.\n", Kid1, Hero1); //Katie -> Batman
printf("%s\'s favourite hero is %s.\n", Kid2, Hero2); //Maddie -> Spiderman
printf("%s's favourite hero is %s.\n", Kid3, Hero3); //Andrew -> The Incredible Hulk

return 0;


}
