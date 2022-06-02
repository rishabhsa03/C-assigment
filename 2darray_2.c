// C Program to find sum of all elements of each row of a matrix
#include <stdio.h>

#define MAXROW		10
#define MAXCOL		10
int main()
{
	int matrix[MAXROW][MAXCOL];
	int i,j,r,c;
	int sum,product;
	printf("Enter number of Rows :");
	scanf("%d",&r);
	printf("Enter number of Cols :");
	scanf("%d",&c);
	printf("\nEnter matrix elements :\n");
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			printf("Enter element [%d,%d] : ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n");
	
	for(i=0;i< r;i++)
	{
		sum=0;		
		for(j=0;j< c;j++)
		{
			printf("%d\t",matrix[i][j]);	
			sum		+=	matrix[i][j];
		}
		printf("\tSUM : %d",sum);
		printf("\n");			
	}
    return 0;
}