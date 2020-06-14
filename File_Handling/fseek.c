#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

	FILE *fw;
	char fwname[10],ch;

	printf("enter file name:\n");
	scanf("%s",fwname);	

	fw = fopen(fwname,"w");
	if(fw==NULL)
	{
	
		printf("no space on stroage media!!!\n");
		exit(0);
	}

	fprintf(fw,"hello world");
	fseek(fw,-3,SEEK_END);
	fseek(fw,0,SEEK_CUR);
	fputc('*',fw);
}


