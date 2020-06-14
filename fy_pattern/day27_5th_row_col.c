#include<stdio.h>

int main()
{
	int i,j,temp,sp,per=4;
	for(i=1;i<=4;i++)
	{	temp=i;
		
		for(sp=0;sp<=4-per;sp++)
		{
			printf(" ");
		}
		per--;

		for(j=1;j<=4,temp<=4;j++)
		{
			
			printf("%d ",temp);
			temp++;
		}
		printf("\n");
		
	}
}
