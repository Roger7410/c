#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
	time_t seed = time(NULL);
	time_t now = clock();
	srand((unsigned int)seed);
	for(int i = 1 ; i<4 ; i++){
		printf("%d ",rand()%10);
	}
	fflush(stdout);
	for(;clock() - now < 5*CLOCKS_PER_SEC;);
	printf("\r");
	for(int i = 1; i<4; i++)
		printf("  ");
	printf("\n");
	srand((unsigned int)seed);
	for(int i = 1; i < 4; i ++){
		printf("%d ",rand()%10);

	}


}
