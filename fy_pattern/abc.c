#include<stdio.h>

int main()
{
	int i,num;
	char ch;

	printf("\nenter no:");
	scanf("%d",&num);

	i=0;
	while(i<num)
	
	{
		ch=65+i;
		printf("\n%c",ch);
		i++;
	}
}
