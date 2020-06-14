#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

	FILE *fp;
	int a,b,ans;
	char frname[20],ch;
	
	printf("enter  file name to read:\n");
	scanf("%s",frname);

	fp=fopen(frname,"r");


		if(fp==NULL)
		{
			printf("OOP'S, FILE NOT FOUND......!");
			exit(0);
		}
		

//		while(1)
//		{
//			ch=fgetc(fp);
//			if(ch== EOF )
//			
//				break;
//			
//			printf("%c",ch);

			fscanf(fp,"%d %d",&a,&b);
			ans=a + b;
			fprintf("%d",ans);
//		}
}

		
	
