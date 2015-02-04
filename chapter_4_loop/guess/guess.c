#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int chosen = 0;
	int guess = 0;
	int count = 3;
	int limit = 20;
	srand(time(NULL));
	chosen = 1+rand()%limit;
	printf("%d",chosen);
	printf("\n\n----------Hi, this is a guess game!--------\n\n");
	printf("Plz input a number between 1-20.\n");
	for(;count>0;count--){
		printf("Now, u got %d tr%s left\n",count,count==1?"y":"ies");
		scanf("%d",&guess);
		if(guess == chosen){
			printf("Congratulations! u got it!\n");
			break;
		}
		else{
			if(count != 1){
				printf("Try again!\n");
			}
		}
	}
	if(count == 0){
		printf("sry~ u didnt get the right answer!\n");
	}
	printf("Hope u enjoy this game! bye\n");
	return 0;
}
