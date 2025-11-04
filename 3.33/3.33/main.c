#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i = 3;
	int j = 12;

	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 12; j++)
		{
			if (i == 2 && j > 1 && j < 12)
				printf(" ");
			else
				printf("+");
		}
		printf("\n");
	}





	return 0;
}