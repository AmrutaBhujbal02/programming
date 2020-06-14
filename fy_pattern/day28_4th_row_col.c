#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==j)
				printf("%d",i);

			else if(i==1 || i==5)
				printf("%d",j);

			else if(j==1|| j==5)
				{
					if(j==1)
						printf("1");
					else
						printf("5");
				}
			else 
				printf(" ");
		

		
		}
		printf("\n");
	}
}
