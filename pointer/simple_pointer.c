#include<stdio.h>

int main()
{

	int *p=NULL;

	int i=22;
	
	p=&i;

	printf("%p is the address of p",&p);
	printf("\n%d",*p);
	printf("value of i is %d", i);
	printf("\n%f",p);
}
	
