#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <sys/time.h>



#define MatrixNumber 10

void printMatrix(int **Array, int rows, int cols)
{
	int i;
	int j;
	
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			printf("%d\t", Array[i][j] );
		}
		printf("\n");
	}
}

void main()
{
	int **a;
	int i, j;
	
	srand( (unsigned)time( NULL ) );
	
	a = (int**)malloc(sizeof(int*)*MatrixNumber);

	for(i = 0; i < MatrixNumber; i++)
	{
		a[i]=(int*)malloc(sizeof(int)*MatrixNumber);
	}
	
	for(i = 0;i < MatrixNumber;i++)
	{
		for(j = 0; j < MatrixNumber;j++)
		{
			a[i][j] = rand()%2000+1;
		}
	}
	
	printMatrix(a,MatrixNumber,MatrixNumber);
	printf("%d\n", a[0][0]);
}

