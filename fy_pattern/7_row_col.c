#include<stdio.h>

int main()
{
	int i,j,sp;
	for(i=1;i<5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		
		}
		for(sp=1;sp<=4-i;sp++)
		{
			printf("#");
		}
		printf("\n");
		
	}
}
