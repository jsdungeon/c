#include <stdio.h>
#include <time.h> //We need this for the seed of the random generator

/* This is a comment. */
int main(int argc, char *argv[])
{
	srand( (unsigned)time( NULL) );
	int hit = (rand() % 50); //We generate a random number between 0 and 50
	int distance = 100;
	int zombie = 4;
	int zombie_health = 100;
	int deadlyBlast = 1;

	// this is also a comment
	printf("You are %d miles away.\n", distance);
	distance = distance * 5;
	printf("You hit the Zombie and caused %d damage!\n",hit);
	printf("The Zombie has %d health left.\n",(100 - hit));
	printf("You just have been teleported to another place. You are now %d miles away.\n", distance);
	printf("\nYou see %d Zombies arriving!\n", zombie);
	zombie = zombie - deadlyBlast;
	printf("You hit a Zombie hard and placed a deadly blast against his rotten skull!\nThere are %d Zombies left!\n", zombie);
	return 0;
}
