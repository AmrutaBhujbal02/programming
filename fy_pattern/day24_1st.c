#include<stdio.h>

int main()
{
	int i,j;
        char ch;

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i%2)
			{

				ch=97+j;
				printf("%c\t",ch);
			}
			else
			{
				ch=65+j;
				printf("%c\t",ch);
			}
		}
		printf("\n");
	}
}
