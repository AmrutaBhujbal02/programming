#include<stdio.h>

int main()
{
	int i,j,num;
	for(i=1;i<=4;i++)
	{	num=1;
		for(j=1;j<=5;j++)
		{
			
			if(i%2==0)
			{
				while(num<=9)
				{
					
					if(num%2)
						printf("%d",num);
						
					num++;
				}
			}
			else
			{
				printf("%d",2*j);
			}
		}
		printf("\n");
	}
	return 0;
}
		                   
