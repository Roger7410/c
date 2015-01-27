#include<stdio.h>

int main(void)
{
	float sum = 0.0f;
	int count = 0;
	printf("Plz input the count of basic products:\n");
	scanf("%d",&count);
	sum = sum + count*3.5;
	printf("\n Plz input the count of high lv products:\n");
	scanf("%d",&count);
	sum = sum + count*5.5;
	printf("\n Here is the sum price: %.2f",sum);
	return 0;
}
