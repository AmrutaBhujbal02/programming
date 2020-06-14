#include<stdio.h>

int main()
{
	int i,j;
	
	for(i=1;i<8;i++)
	{
		for(j=1;j<8;j++)
		{
			if(i==1||i==7||j==1||j==7)
				printf("*");
			else if(i%2!=0 && j%2!=0)
			
				printf("*");
			
			else
				printf(" ");
		}
		printf("\n");
	}
}
