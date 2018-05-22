#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
	int distance = 100;
	int zombie = 4;
	int deadlyBlast = 1;

	// this is also a comment
	printf("You are %d miles away.\n", distance);
	distance = distance * 5;
	printf("You just have been teleported to another place. You are now %d miles away.\n", distance);
	printf("\nYou see %d Zombies arriving!\n", zombie);
	zombie = zombie - deadlyBlast;
	printf("You hit a Zombie hard and placed a deadly blast against his rotten skull!\nThere are %d Zombies left!\n", zombie);
	return 0;
}
