#include<stdio.h>

int main()
{

	int i,j,num=0,temp=0;

	for(i=0;i<4;i++)
	{	
		for(j=0;j<4;j++)
		{	
			num++;
			if(num<=9)
		
				printf("%d\t",num);
			

			else
			{
				temp++;
				printf("%d\t",temp);
			}
	
		}
		printf("\n");
	}
}	
