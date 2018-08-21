/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int main(int argc, char *argv[])
{
    /* TODO: Enter code here */
	printf("Test with Pelles C\n\n");
	int MAX_LEN = 80;
	char a_word[MAX_LEN];

	printf("Enter a word: ");
	scanf("%s", a_word);
	printf("You entered: %s\n\n", a_word);
	printf("Enter 'exit' to stop and leave the program: ");
	scanf("%s", a_word);
	if (a_word != "exit")
	{
		printf("Enter 'exit' to stop and leave the program: ");
	}

    return 0;
}

