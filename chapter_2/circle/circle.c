#include <stdio.h>
#define PI 3.14

int main (void)
{
float radius = 0.0f;
float diameter = 0.0f;
float circumference =0.0f;
float area = 0.0f;

printf("please input the diameter of the circle:\n");
scanf("%f", &diameter);
radius = diameter/2;
printf("the radius = %.2f",radius);
return 0;
}
