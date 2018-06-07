#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h> //We need this for the seed of the random generator

	int testExtDungeonRoom[25][9]={
			{1,0,1,1,0,0,0,1,1},
			{2,0,1,0,1,0,0,1,1},
			{3,0,1,0,1,0,0,1,1},
			{4,0,1,0,1,0,0,1,1},
			{5,0,0,1,1,0,0,1,1},
			{6,1,1,0,0,0,0,1,1},
			{6,1,1,0,0,0,0,1,1},
			{8,0,1,1,0,0,0,1,1},
			{9,0,1,0,1,0,0,1,1},
			{10,1,0,0,1,0,0,1,1},
			{11,0,0,1,0,0,0,1,1},
			{12,1,0,1,0,0,0,1,1},
			{13,1,1,1,0,0,0,1,1},
			{14,0,1,0,1,0,0,1,1},
			{15,0,0,1,1,0,0,1,1},
			{16,1,1,1,0,0,0,1,1},
			{17,1,1,0,1,0,0,1,1},
			{18,1,0,0,1,0,0,1,1},
			{19,0,1,1,0,0,0,1,1},
			{20,1,0,1,1,0,0,1,1},
//			{20,10,11,12,13,14,15,16,17},
			{21,1,1,0,0,0,0,1,1},
			{22,0,1,0,1,0,0,1,1},
			{23,0,1,0,1,0,0,1,1},
			{24,1,0,0,1,0,0,1,1},
			{25,1,0,0,0,0,0,1,1}
		};
		char resN = ' ';
		char resE = ' ';
		char resS = ' ';
		char resW = ' ';
		srand( (unsigned)time( NULL ) );
		int randomRoom = (rand() % 25); //We generate a random number between 0 and 24
		i = randomRoom;
		room = randomRoom;
int checkExits(int i) {

	//int testExtDungeonRoom[25][9];
	resN = ' ';
	resE = ' ';
	resS = ' ';
	resW = ' ';

	if (testExtDungeonRoom[i][1] == 1)
			{
//				printf("There is an exit to the north\n\n");
				resN = ('N');
				testExtDungeonRoom[i][1]=3;

			}
	if (testExtDungeonRoom[i][2] == 1)
			{
//				printf("There is an exit to the east\n\n");
				resE = ('E');
				testExtDungeonRoom[i][2]=3;
			}
	if (testExtDungeonRoom[i][3] == 1)
			{
//				printf("There is an exit to the south\n\n");
				resS = ('S');
				testExtDungeonRoom[i][3]=3;
			}
	if (testExtDungeonRoom[i][4] == 1)
			{
//				printf("There is an exit to the west\n\n");
				resW = ('W');
				testExtDungeonRoom[i][4]=3;
			}
			for(int j=0;j<9;j++){
			printf("%d",testExtDungeonRoom[i][j]);
			printf(",");
		}
//char c[4]={resN, resE, resS, resW};
return(1);
}

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
	int i = 0;
//	int extDungeonRoom[25][9];
	int val = 0;
	int testEx = 0;
	char exitN;
	char exitE;
	char exitS;
	char exitW;


testEx = testExtDungeonRoom[i][0];
printf("testExtDungeonRoom [0][0] value = %d\n\n",testEx );
printf("You are in room %d\n\n",room );

printf("%c\n\n", 248);

checkExits(i);
printf("Exits: %c %c %c %c\n\n",resN, resE, resS, resW );

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
				Sleep(2000);
				}
		}
	printf("\n\nEND OF THE PROGRAM\n\n");
	return 0;
}
}
