//autor Luis Enrique Juarez Ramirez
//1AV1
//Licenciatura en ciencias de datod
#include <stdio.h>
#include <math.h>
int main()
{
	float b,a,c,menosb,bcuadrada,raiz,discriminante,formula,xpositivo,xneg;
printf("\n Este programa calcula los valores de la formula general hecho por mi \n");
printf("\n Ingresa el valor de a \n ");
scanf("%f", &a);
printf("\nIngresa el valor de b \n");
scanf("%f", &b);
printf("\nIngresa el valor de c \n");
scanf("%f", &c);
 
menosb=b*-1;
bcuadrada=b*b;
float multi=4*a*c;
discriminante=bcuadrada-multi;
raiz=sqrt(discriminante);
xpositivo=(-b+raiz)/(2*a);
xneg=(-b-raiz)/(2*a);
printf("\n  Resultado positivo  %f\n ",xpositivo);
printf("\n  Resultado positivo  %f\n ",xneg);


}
