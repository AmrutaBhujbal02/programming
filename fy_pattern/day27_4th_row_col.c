#include<stdio.h>

int main()
{

	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6;j++)
		{
			if(i==j)
			{
				printf("*");
			}
			else if(i==1 || i==6 ||j==5|| j==1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		
		}
		printf("\n");
	}
}
