#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

	FILE *fr,*fw;
	int i,pos,arr[20];
	char frname[15],fwname[15],ch;

	printf("enter file name to read:\n");
	scanf("%s",frname);

	printf("enter file name to write:\n");
	scanf("%s",fwname);

	fr=fopen(frname,"r");
	fw=fopen(fwname,"w");

	if(fr== NULL)
	{
		printf("cant open file\n");
		exit(0);
	}
	i=0;
	while(1)
	{

		ch=fgetc(fr);
	
		if(ch==EOF)
		{
			break;
		}
		
		else if(ch=='i')
		{

			pos=ftell(fr);
			printf("%d\n",pos);
			arr[i]=pos;
			printf("\n\n\n%d\n\n\n",arr[i]);
			printf("hi");
			fseek(fw,arr[i],SEEK_SET);
			printf("by");
			fputc('*',fw);
			i++;
		}
		else
		{

			fputc(ch,fw);
		}
	}
	unlink(frname);
	rename(fwname,frname);
	fclose(fr);
	fclose(fw);
}
