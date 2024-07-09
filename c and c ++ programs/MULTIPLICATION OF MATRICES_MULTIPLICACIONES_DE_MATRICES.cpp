/*Autor:
JUAREZ RAMIREZ LUIS ENRIQUE
*/
#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
 int opcion,nmatrics,maxf=0,maxc=0,multi;
 int i=0,j=0,k=0;
 int x1,y1,filas,columnas;
 char seguir,resp;
 float division[100][100],au,mdivision[100][100];

	int m,n,f,c;
	float A[100][100],B[100][100],C[100][100];
	    printf("\n-IPN ESCOM-\n");
	    printf("\n---------------------------------------------------\n");
        printf("\nEste programa realiza la multiplicacion de matrice nxn\n");
        printf("\nPero con numeros aleatorioss\n");
		printf("\n---------------------------------------------------\n");
		printf("DIMENSIONES: \n");
		printf("\nPRIMERA MATRIZ\n");
		printf("\nINGRESE LA CANTIDAD DE FILAS: ");
		scanf("%d",&m);
		printf("INGRESE LA CANTIDAD DE COLUMNAS: ");
		scanf("%d",&n);
		printf("\n---------------------------------------------------\n");
		printf("\nSEGUNDA MATRIZ\n");
		printf("\nINGRESE LA CANTIDAD DE FILAS: ");
		scanf("%d",&f);
		printf("INGRESE LA CANTIDAD DE COLUMNAS: ");
		scanf("%d",&c);
		printf("\n");
		if(n!=f)
		{
			printf("                   ***ERROR DE DIMENSIONES***\n\nEL NUMERO DE COLUMNAS DE LA PRIMERA MATRIZ DEBE COINCIDIR CON EL NUMERO\n DE FILAS DE LA SEGUNDA MATRIZ, INGRESE MATRICES COMPATIBLES.\n");
		
		}
		printf("\nINGRESE LOS VALORES DE LA PRIMERA MATRIZ\n\n");
		//INGRESE LAS MATRICES
		for (i=1;i<=m;i++)
		{
 			for (j=1;j<=n;j++)
			{	 
			
 			A[i][j]=	A[i][j]+rand()%10+1;
			}
		}
		
			for (i=1;i<=m;i++)
		{
 			for (j=1;j<=n;j++)
			{	 
	printf("%f \t",A[i][j]);
			}
				puts("\n");
		}
		printf("\n");
		printf("\n---------------------------------------------------\n");
		printf("\nINGRESE LOS VALORES DE LA SEGUNDA MATRIZ\n\n");
  		for(i=1;i<=f;i++)
  		{
   			for (j=1;j<=c;j++)
    		{ 
			
    				B[i][j]=	B[i][j]+rand()%10+1;
    		}
			
		}
		
			
			for (i=1;i<=m;i++)
		{
 			for (j=1;j<=n;j++)
			{	 
	printf("%f \t ",B[i][j]);
			}
			puts("\n");
		}
		//OPERACION DE MULTIPLICACION
 		for(i=1;i<=m;i++)
    	{
			for (j=1;j<=c;j++)
       		{	 
	   			C[i][j]=0;
       			for (k=1;k<=n;k++)
          		{
		  			C[i][j]=C[i][j]+A[i][k]*B[k][j];
          		}
       		}
    	}
		printf("\n---------------------------------------------------\n");
 		printf("\nLA MULTIPLICACION DE LAS MATRICES ES:\n\n");
		//IMPRESION
  		for(i=1;i<=m;i++)
		{
   			for (j=1;j<=c;j++)
    		{	 
				printf("\t%4.2f",C[i][j]);
    		}
     		printf("\n\n ");
   		}
		
   		fflush( stdin );
      
 return 0;
}
