#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<5;i++)
	{
		for(j=1;j<5;j++)
		{
			if(i==2 ||i==3) 
			{	
				if(j==2||j==3)
					printf("*");
				else
					printf("%d",j);
			}
			else
			
				printf("%d",j);
			

		}
		printf("\n");
	}
}
