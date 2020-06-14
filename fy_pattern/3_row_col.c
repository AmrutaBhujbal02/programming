#include<stdio.h>

int main()
{
	int i,j;
	char ch;

	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			if(i%2==0)
				
				printf("%d",j+1);
			else
			{	ch=97+j;
				printf("%c",ch);
			}
		
		}
		printf("\n");
	}
}
