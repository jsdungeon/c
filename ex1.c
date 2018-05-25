#include <stdio.h>
#include <time.h> //We need this for the seed of the random generator

/* This is a comment. */
int main(int argc, char *argv[])
{
	srand( (unsigned)time( NULL ) );
	int hit = (rand() % 80); //We generate a random number between 0 and 79
	int distance = 100;
	int zombie = 4;
	int zombieHealth = 500;
	int deadlyBlast = 1;
	int decision = 10;
	int attack = 0;

	// this is also a comment
	printf("You are %d miles away.\n", distance);
	distance = distance * 5;
	printf("You hit the Zombie and caused %d damage!\n",hit);
	printf("The Zombie has %d health left.\n",(zombieHealth - hit));
	printf("You just have been teleported to another place. You are now %d miles away.\n", distance);
	printf("\nYou see %d Zombies arriving!\n", zombie);
	zombie = zombie - deadlyBlast;
	printf("You hit a Zombie hard and placed a deadly blast against his rotten skull!\nThere are %d Zombies left!\n", zombie);
	printf("\nEnter '0' for running away or '1' to fight:\n"
			"Type a letter to end your input.\n");
//	while( scanf( "%lf", &decision ) == 0 )
	while( scanf( "%d", &decision ) == 0 )
	
			printf("Your decision is: \n %d ", decision);
		{
		if ( decision == 0 )
		{		
		printf("You avoid the fight and run away. There are %d Zombies following you!\n", zombie);
		}		
		else 
		{		
			printf("The Zombie has %d health left.\n",(zombieHealth));
			while( zombieHealth >= 0)	
	
				{	
				hit = (rand() % 80);			
				printf("You fight and attack the Zombie closest to you!\n");
				printf("You hit the Zombie and caused %d damage!\n",hit);
					if ( zombieHealth - hit > 0 ) //We need to subtract the hit here!
						{				
							printf("The Zombie has %d health left.\n\n",(zombieHealth - hit));
							zombieHealth = zombieHealth - hit;
						}
						else 
							{
								 printf("\nThe Zombie is dead!\n");
								 break;
							}
				attack = 1;
				sleep(2);
				}
		}
	printf("\n\nEND OF THE PROGRAM\n\n");
	return 0;
}
}
