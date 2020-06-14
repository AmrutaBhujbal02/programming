#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(i==1 || i==10)
			{
				printf("*");
			
			}
			else if(i==2)
				{	
					printf("*");
					if(j-2==3 ||j-2==4)
					{
						printf(" ");
					}
				}

		}
		printf("\n");
	}
}
