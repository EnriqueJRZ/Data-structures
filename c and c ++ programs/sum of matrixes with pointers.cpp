#include <stdio.h>
#define ROWS 2
#define COLS 2

int main()
{
	
void llenar(int mat[][COLS]);
void imprimir(int mat[][COLS]);
void s(int a[][COLS], int b[][COLS], int w[][COLS]);
    int a[ROWS][COLS];
    int b[ROWS][COLS];
    int w[ROWS][COLS];
	puts("\nEste programa suma matrices\n");
	puts("\nIngresa tu primera matriz\n");
	llenar(a);
	puts("\nTu matriz es\n");
	imprimir(a);
	puts("\nIngresa tu segunda matriz\n");
	llenar(b);
	puts("\nTu matriz es\n");
	imprimir(b);
   	puts("\nTu suma de matriz es\n");
   	s(a,b,w);
   	imprimir(w);
 return 0;
	}
void llenar(int mat[][COLS])
{
	int i,j;
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{   
		printf("\nIngresa en su posicion %d , %d \n",i+1,j+1);
		scanf("%d",(*(mat+i)+j));
    	}

}


}

void imprimir(int mat[][COLS])
{
	int i,j;
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
				printf("%d",*(*(mat+i)+j));
    	}
     printf("\n");
}
}

void s(int a[][COLS], int b[][COLS], int w[][COLS])
{
    int i, j; 
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            // res[i][j] = mat1[i][j] + mat2[i][j]
         
            *(*(w + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
        }
    }
}
