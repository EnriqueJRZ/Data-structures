#include<stdio.h>
#include<string.h>

void iniciaOperacion(int argc, char **argv)
{
puts("Este programa suma dos matrices");
    int nmatrics,maxf,maxc;
	printf("\n\nIngrese el numero de matrices que usara: ");
 	scanf("%d",&nmatrics);
 	printf("\nDIMENSIONES\n");
 	printf("Ingrese el numero de filas que usara: ");
 	scanf("%d",&maxf);
 	printf("Ingrese el numero de columnas que usara: ");
 	scanf("%d",&maxc);
int A[nmatrics][maxf][maxc];
int aux[maxf][maxc];
 		printf("\nIngrese los valores de las matrices a sumar\n\n");
 		int i,j,k;
    for(i=0;i<nmatrics;i++) //Capturar valores de las matrices del usuario
    {
    	for(j=0;j<maxf;j++)
   		{
  			for(k=0;k<maxc;k++)
  			{
  	 			printf("Ingrese los valores de la matriz %d posicion %d,%d  \n",i+1,j+1,k+1);
  	 			scanf("%d",&A[i][j][k]);
  			}
   		}
 	}

 		//imprimir matrices del usuario
  	printf("\nSus matrices son: \n");
  	for(i=0;i<nmatrics;i++)
 	{
		for(j=0;j<maxf;j++)
   		{
  			for(k=0;k<maxc;k++)
  			{
  				printf("%d\t",A[i][j][k]);
  			}
  		printf("\n");
  		}
  	printf("\n\n\n");
  	}
  	//proceso suma
  	printf("\nSuma: \n");
  	for(j=0;j<maxf;j++) //Limpiar aux de valores basura
 	{
 		for(k=0;k<maxc;k++)
 		{
  			aux[j][k]=0;
  		}
	}
	for(j=0;j<maxf;j++) //suma acumulativa
 	{
		for(k=0;k<maxc;k++)
   		{
  			for(i=0;i<nmatrics;i++)
  			{
  				aux[j][k]=aux[j][k]+A[i][j][k];
  			}
  		}
  	}
  	for(i=0;i<maxf;i++) //imprimir resultado
 	{
  		for(j=0;j<maxc;j++)
  		{
  			printf("%d\t",aux[i][j]);
		}
		printf("\n");
	}
}

void main(int argc, char **argv)
{

	iniciaOperacion(argc,argv);
}
