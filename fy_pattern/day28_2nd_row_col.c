#include<stdio.h>

int main()
{
	int i,j,row,col;
	printf("\nenter row &  col:");
	scanf("%d%d",&row,&col);

	for(i=1;i<=row;i++)
	{	num=0;
		for(j=1;j<=col;j++)
		{
			if(i+j==5)
				printf("#");
			else if(j>=i)
				printf("*");
			
		}
		printf("\n");
	}
	return 0;
}
