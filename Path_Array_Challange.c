Q.You are given an 2D array A of size m*n matrix.It Contains 1's & 0's.Here 1 means path is allowed & o means path is not allowed.One cell contain 9.You have to start from cell(0,0) & find out weather it is possible to reach at the cell which contains 9.Note that only vertical & horizontal moves are allowed.  



#include<stdio.h>
#include<string.h>
void accept(int [][10],int,int);
void display(int arr[][10],int,int);
void path(int [][10],int,int);

void accept(int arr[][10],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("\n%d",&arr[i][j]);
		}
	}
}

void display(int arr[][10],int row,int col)
{ 	
        int i,j;
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf("%d\t",arr[i][j]);
                }
		printf("\n");
	
        }
}

void path(int arr[][10],int row,int col)
{
	int i,j,cl,rl;
	int flag=1;	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]==0)
			{
				
				for(cl=0;cl<col;cl++)
				{
					for(rl=0;rl<row;rl++)
					{
						if(arr[rl][cl]==0)
						{
							flag=0;
							goto label;
						
						}
						else 
                       				{
                                			flag=1;
                                			if(arr[rl][cl]==9)
                                				goto label;
             					}
					}
				}
			}
			if(arr[i][j]==1)
			{
				flag=1;
				if(arr[i][j]==9)
					goto label;			
			}
		}
		
	}
	label:if(flag==1)
	      
		printf("Possible\n");
	      else
		printf("\nNot Possible");	
	
}					
		

int main()
{
	int value,row,col,arr[20][10],num;
	printf("\nhow many rows you want to enter:");
	scanf("%d",&row);
	
	printf("\nhow many cols you want to enter:");
        scanf("%d",&col);

	accept(arr,row,col);
	printf("\n");
	display(arr,row,col);
	path(arr,row,col);
}

/*OUTPUT:
how many rows you want to enter:3

how many cols you want to enter:3
1
1
0
9
1
0
0
0
1

1       1       0
9       1       0
0       0       1
Possible
[root@localhost fy_array]# ./a.out

how many rows you want to enter:3

how many cols you want to enter:3
1
1
0
0
1
0
1
0
9

1       1       0
0       1       0
1       0       9

Not Possible
*/
	
