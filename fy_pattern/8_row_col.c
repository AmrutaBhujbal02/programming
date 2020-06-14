#include<stdio.h>

int main()
{
	int i,j,sp;
	
	for(i=4;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
//		printf("\n");

		for(sp=1;sp<=4-i;sp++)
		{
			printf("#");
		}
		printf("\n");
	}
}
