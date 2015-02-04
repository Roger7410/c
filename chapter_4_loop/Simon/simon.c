#include<stdio.h>
#include<time.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>

int main(void){
	char more_game = 'y';
	bool correct = false;
	int length = 0;
	time_t seed = 0;
	int number = 0;
	time_t now = 0;
	int time_taken = 0;
	
	printf("\nBalabala introductions!!\n\n");
	printf("Goodluck! Press enter to play!\n");
	printf("This is the more_game %c\n",more_game);
	scanf("%c",&more_game);
	printf("This is the more_game value now %c\n",more_game);

	do{
		correct = true;
		length = 2;
		time_taken = clock();
		printf("time_taken is %d\n",time_taken);
		while(correct){
			length ++;
			printf("length is %d\n",length);
			seed = time(NULL);
			printf("can i print the seed? %ld\n",seed);
			now = clock();
			srand((unsigned int)seed);
			//printf("lalala %d\n",rand());
			for(int i = 1; i < length; i++){
				printf("%d ", rand()%10);
			}
			//for(; clock() - now < 5*CLOCKS_PER_SEC;);
			//printf("\r");
			//for(int i = 1; i <length ; i++)
			//	printf("  ");
			//printf("\n");
			//srand((unsigned int)seed);
			//for(int i = 1; i <length ; i++){
			//	scanf("%d",&number);
			//	if(number!= rand()%10){
			//		correct = false;
			//		break;
			//	}				
			//}
			printf("%s\n",correct?"Correct!":"Wrong!");
			correct = false;
		}
		time_taken = (clock()-time_taken)/CLOCKS_PER_SEC;
		printf("\n\nYour score is %d",length*100/time_taken);
		fflush(stdin);
		printf("\nDo you need another game(y/n)?");
		scanf("%c",&more_game);
	}while(more_game == 'y');
	return 0;
}
