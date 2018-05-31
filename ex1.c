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
	int room = 0;
	int i;

	//int dungeonRoom[8];
	int dungeonRoom1[9] = {1,0,1,1,0,0,0,1,1};
	int dungeonRoom2[9] = {2,0,1,0,1,0,0,1,1};
	int dungeonRoom3[9] = {3,0,1,0,1,0,0,1,1};
	int dungeonRoom4[9] = {4,0,1,0,1,0,0,1,1};
	int dungeonRoom5[9] = {5,0,0,1,1,0,0,1,1};
	int dungeonRoom6[9] = {6,1,1,0,0,0,0,1,1};
	int dungeonRoom7[9] = {7,0,0,1,1,0,0,1,1};
	int dungeonRoom8[9] = {8,0,1,1,0,0,0,1,1};
	int dungeonRoom9[9] = {9,0,1,0,1,0,0,1,1};
	int dungeonRoom10[9] = {10,1,0,0,1,0,0,1,1};
	int dungeonRoom11[9] = {11,0,0,1,0,0,0,1,1};
	int dungeonRoom12[9] = {12,1,0,1,0,0,0,1,1};
	int dungeonRoom13[9] = {13,1,1,1,0,0,0,1,1};
	int dungeonRoom14[9] = {14,0,1,0,1,0,0,1,1};
	int dungeonRoom15[9] = {15,0,0,1,1,0,0,1,1};
	int dungeonRoom16[9] = {16,1,1,1,0,0,0,1,1};
	int dungeonRoom17[9] = {17,1,1,0,1,0,0,1,1};
	int dungeonRoom18[9] = {18,1,0,0,1,0,0,1,1};
	int dungeonRoom19[9] = {19,0,1,1,0,0,0,1,1};
	int dungeonRoom20[9] = {20,1,0,1,1,0,0,1,1};
	int dungeonRoom21[9] = {21,1,1,0,0,0,0,1,1};
	int dungeonRoom22[9] = {22,0,1,0,1,0,0,1,1};
	int dungeonRoom23[9] = {23,0,1,0,1,0,0,1,1};
	int dungeonRoom24[9] = {24,1,0,0,1,0,0,1,1};
	int dungeonRoom25[9] = {25,1,0,0,0,0,0,1,1};

room = dungeonRoom1[1];
printf("You are in room: %d \n\n");

	if (dungeonRoom1[1] ==1)
			{
				printf("There is an exit to the north\n\n");
			}
	if (dungeonRoom1[2] ==1)
			{
				printf("There is an exit to the east\n\n");
			}
	if (dungeonRoom1[3] ==1)
				{
					printf("There is an exit to the south\n\n");
				}
	if (dungeonRoom1[4] ==1)
					{
						printf("There is an exit to the west\n\n");
					}


printf("You are %d miles away.\n", distance);
distance = distance * 5;
printf("You hit the Zombie and caused %d damage!\n",hit);
printf("The Zombie has %d health left.\n",(zombieHealth - hit));
printf("You just have been teleported to another place. You are now %d miles away.\n", distance);
printf("\nYou see %d Zombies arriving!\n", zombie);
zombie = zombie - deadlyBlast;
printf("You hit a Zombie hard and placed a deadly blast against his rotten skull!\nThere are %d Zombies left!\n", zombie);
printf("\nEnter '0' for running away or '1' to fight:\n");

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
