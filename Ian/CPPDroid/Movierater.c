/* This program is just messing around on CPPDroid */

#include <stdio.h>

 //Declare some variables

    char answer;
    char FilmTitle[60];
    int rating;
    char name[10];

int main()
{

    printf("What is your name?\n");
    scanf("%s", &name);
    printf("Welcome to my movie rating program %s\n", name);
    printf("Enter a movie title\n");
    scanf(" %[^\t\n]s", FilmTitle); //This reads a string after a space
    printf("Would you like to give %s a rating? (Enter Y or N)\n", FilmTitle);
    scanf("%s", &answer);
      if (answer == 'n' || answer == 'N')
    {
        printf("Okay then. Goodbye!");
    }

    else if (answer == 'y' || answer == 'Y'){
        printf("What rating will you give %s(Enter 1 - 5)?\n", FilmTitle);
        scanf("%d", &rating);
        if (rating == 1) {
                printf("%s must be a terrible movie\n", FilmTitle);
            }
      else if (rating == 2) {
                printf("%s must be an okay  movie\n", FilmTitle);
            }
    else if (rating == 3) {
                printf("%s might be worth seeing then\n", FilmTitle);
            }

    else if (rating == 4) {
                printf("%s must be a pretty good movie\n", FilmTitle);
            }
    else if (rating == 5) {
                printf("%s must be a great movie and worth seeing in a cinema\n", FilmTitle); }
     else {


        printf("Incorrect rating entered");
        printf("What rating will you give %c(Enter 1 - 5)?\n", FilmTitle);
        scanf("%d", &rating);
            }

        printf("That's all folks!\n");


    return 0;

}

}
