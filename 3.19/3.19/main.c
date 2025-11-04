#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float pri,rate,day;
	float j = 365;
	do
	{
		printf("Enter loan principle (-1 to end): ");
		scanf_s("%f", &pri);
		if (pri == -1) break;
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &day);
		printf("The interest charge is $%.2f\n\n",pri*rate*day/365);
	} while (pri != -1);
	return 0;
}