#include <stdio.h>
#define ROWS 3
#define COLS 3

void addMatrix(int a[ROWS][COLS], int b[ROWS][COLS], int c[ROWS][COLS])
{
	int i,j ;
	
	for (i = 0; i < ROWS; i++) 
        for (j = 0; j < COLS; j++) 
            c[i][j] = a[i][j] + b[i][j];
}

void printMatrix(int matrix[ROWS][COLS]) 
{
    int i, j;
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) 
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main(void)
{
	int A[ROWS][COLS]=
	{
		{2,3,0},
		{8,9,1},
		{7,0,5}
	};
	
	int B[ROWS][COLS]=
	{
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};
	
	int C[ROWS][COLS];
	
	addMatrix(A,B,C);
	printMatrix(C);
	
	return 0;
}
