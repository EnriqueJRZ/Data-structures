#include <stdio.h>
//JUÁREZ RAMÍREZ LUIS ENRIQUE , GRUPO 1AV1 LCD

int main(){	
    const int centinela=0;
	float acum=0;
	float numero=0;
	int t=0;
	printf("\n Este pr56ograma calcula el promedio de los valores que se ingresen \n");
	scanf("%f",&numero);
while(numero!=centinela)
{ 

     t=t+1;
     acum+=numero;
	 printf("\n Ingresa un numero \n");
	 scanf("%f",&numero);
      
}
	printf("\n Promedio es igual a %f \n",acum/t);
}
