#include<stdio.h>

int main()
{
	int i,j,row,col;
	printf("\nenter row & col:");
	scanf("%d%d",&row,&col);

	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i+j==5)
			
				printf("#");
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}
