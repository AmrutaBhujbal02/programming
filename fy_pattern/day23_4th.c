#include<stdio.h>

int main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(j%2)
				printf("*");
			
			else
				printf("#");
		}
		printf("\n");
	}
	printf("\n%d",0%2);
}
