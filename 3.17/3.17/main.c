#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a,b,c,cr,cl;
	
	do
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%f", &a);
		if (a == -1) break;
		printf("Enter beginning balance: ");
		scanf_s("%f", &b);
		printf("Enter total charges: ");
		scanf_s("%f", &c);
		printf("Enter total credits: ");
		scanf_s("%f", &cr);
		printf("Enter credit limit: ");
		scanf_s("%f", &cl);
		if (b + c - cr > cl)
		{
			printf("Account:      %.0f\n", a);
			printf("Credit limit: %.2f\n", cl);
			printf("Balance:      %.2f\n", b + c - cr);
			printf("Credit Limit Exceeded.\n\n");
		}
		else
			printf("\n");
		
	} while (a != -1);
	return 0;
}