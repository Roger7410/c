#include <stdio.h>

int main(void)
{
	double num1 = 0.0;
	double num2 = 0.0;
	char oper = 0;
	printf("\n\n\n-------------Hello! This is a calculater~"
		"-------------\n\n\n");
	printf("Plz input the formula which you want to calculate:\n");
	scanf("%lf %c %lf", &num1, &oper, &num2);
	if( !(num1 >= -10000 && num1 <= 10000) )
	{
		printf("Wrong input, we can't calculate them, sry!");	
	}
	else if( !(num2 >= -10000 && num2 <= 10000) )
	{
		printf("Wrong input, sry!");
	}
	else if( !(oper=='+'||oper=='-'||oper=='*'||oper=='/') )
	{
		printf("Wrong, sry!");
	}
	else
	{
		double sum = 0.0;
		switch(oper)
		{
			case '+':
			sum = num1 + num2;
			break;
			case '-':
			sum = num1 - num2;
			break;
			case '*':
			sum = num1 * num2;
			break;
			case '/':
			sum = num1 / num2;
			break;
			default:
			printf("How could this happen?");
			break;
		}
		printf("\n After out precisely calculation, the result is %lf",sum);
		printf("\n thank you for using our calculater!!!! bye");
	}
	return 0;
}
