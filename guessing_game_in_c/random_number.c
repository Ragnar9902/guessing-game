#include <stdlib.h>

int random_number(int n)
{	
	int num = 1000;
	int is_not = 1;

	while(is_not){
		num = rand();
		if(num <= n)
			break;
	}
	return(num);
}
