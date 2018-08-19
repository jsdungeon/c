#include<stdio.h>
#include<stdlib.h>
#define MAX_STRING_LEN 12 //max number of characters in String is 12

int main(){

//declare variables

char name[MAX_STRING_LEN];// need to figure Strings out
int randomnumber = rand() %10 + 1;//random number
int guess; //user guess
int counter = 0; //to keep guessing
int correct = 0;

printf("Hello, welcome to my app\n");
printf("What is your name?\n");
scanf("%s",&name);
printf("Good to meet you %s\n", &name);
printf("Can you guess the number I'm thinking of between 1-10?\n");
 // generate random number between 1-10

//compare guess
        printf("Enter a number between 1 - 10\n");
        do {
              scanf("%d", &guess);
        if (guess == randomnumber)
        {

             counter++; //increase counter
             printf("Well done.  You guessed in %d times\n", counter);
             correct = 1; //game ends
        }

        if (guess < randomnumber)
        {
             counter++; //increase counter
             printf("Your guess is too low.  Guess again\n");

        }

        if (guess > randomnumber)
        {
             counter++; //increase counter
             printf("Your guess is too high.  Guess again\n");

        }
       }   while (correct == 0);

return 0;
}
