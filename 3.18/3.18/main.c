#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float i;
	float j = 200;
	do 
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &i);
		if (i == -1) break;
		printf("Salary is: %.2f\n\n", i * 0.09 + 200);
	} while (i != - 1);
	return 0;
}