#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float h,r;
	
	do
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%f", &h);
		if (h == -1) break;
		printf("Enter hourly rate if the worker ($00.00): ");
		scanf_s("%f", &r);
		if (h <= 40)
			printf("Salary is %.2f\n\n", h * r);
		else
			printf("Salary is %.2f\n\n", 40 * r+(h-40)*r*1.5);
		
	} while (h != -1);
	return 0;
}