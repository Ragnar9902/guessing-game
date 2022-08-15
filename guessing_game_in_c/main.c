#include <stdio.h>
#include "main.h"

int main()
{
	int *guess = (int *)malloc(sizeof(int));
	int secret_number = random_number(100);
	int game_on = 1;

	while(game_on)
	{
		printf("digit the number\n");
		scanf("%d", guess);

		if((*guess)==secret_number)
		{
			printf("you Win!\n");
			break;
		}
		if((*guess)>secret_number)
                {
                        printf("too high\n");
                }
		if((*guess)<=secret_number)
                {
                        printf("too small\n");
                }


	}
	return(1);
}
