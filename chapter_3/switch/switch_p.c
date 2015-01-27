#include <stdio.h>

int main(void)

{
	int choice = 0;
	printf("Hello lucky man, u got a choice to pick a number between 1-10"
		" go ahead and pick!\n");
	scanf("%d",&choice);
	if(choice>10 || choice<1)
		choice = 11;
	switch (choice)
	{
		case 11:
			printf("hey man, the number u enrolled is invalid!");
			break;
		case 2:
			printf("wow frist prize!!! congratulations");
			break;
		case 7:
			printf("little bear!");
			break;
		default:
			printf("I am so sorry that u miss the prize.");
			break;
	}
	printf("\nthankyou!");
}
