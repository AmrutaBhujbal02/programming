#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

	char str[20][30],temp[30];
	int i,j,num;
	
	printf("how many strings  you want to sort:\n");
	scanf("%d",&num);

	
	for(i=0;i<num;i++)
	{
             
		//printf("value of i is:%d\n",i);
		gets(str[i]);
	}
       
	printf("displaying strings");
	for(i=0;i<=num;i++)
	{
		printf("\n%s",str[i]);
	}
        printf("\nSORTING CHARCTER ARRAY!!!!\n");

	for(i=0;i<=num;i++)
	{

		for(j=i+1;j<=num;j++)
		{
			if(strcmp(str[i],str[j]) > 0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],str[i]);
			}
		}
	}

	for(i=1;i<=num;i++)
	{
		printf("%s",str[i]);
//		getch();
	
	}
	
}			
	
