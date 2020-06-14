#include<stdio.h>

int main()
{
	int i,j,row,col;
	printf("\nenter no of row & cols:");
	scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
				if(i==1 || i==6)
				{
					printf("*\t");
				}
				else
				{
					
					if(j==2||j==3||j==4)
					{
						printf("@\t");
					}
					else
					{
						printf("*\t");
					}
				}
		}
			printf("\n");

	}
}

	
