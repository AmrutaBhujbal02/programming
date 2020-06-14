#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

	int arr[30],i;
	FILE *fr,*fw;
	char frname[10],fwname[10],ch;

	printf("enter file name to read:");
	scanf("%s",frname);

	printf("enter file name to write:\n");
	scanf("%s",fwname);

	fr=fopen(frname,"r");
	fw=fopen(fwname,"w");

	if(fr==NULL)
	{
		printf("ops file not found!!\n");
	}

		while(1)
		{
	
			
				
				 ch=fgetc(fr);
               			 if(ch==EOF)
                		{
                     		   break;
                		}
				
                            
				
				else if(ch=='n')
				{
					fputc('*',fw);
					arr[i]ftell(fr)
				}										
				else
				{
					fputc(ch,fw);	
					
				}
		}
//	printf("done!!!\n");
	fclose(fr);
	fclose(fw);
	printf("DONE!!!!!1\n");
}
