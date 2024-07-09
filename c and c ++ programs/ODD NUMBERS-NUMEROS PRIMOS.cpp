#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;
//JUÀREZ RAMIREZ LUIS ENRIQUE
int main()
{
    ofstream outputPrime ("Numeros_Primos.txt");
    int n,i = 3, count, c;
    printf("\n ESCOM IPN : \n ");
    printf("\n Ingrese el numero de numeros primos requeridos : \n ");
    scanf("%d", &n);
    if(n >= 1)
    {
        printf("\n\nLa cantidad de %d numeros primos son:  ", n);
        outputPrime << 1 << endl;;
        outputPrime << 2 << endl;;
        printf("\n1\n");
        printf("2\n");
    }
    // iteracion por n prime numbers
    //i es el numero para ser checado en cada iteracio iniciando desde 3
    for(count = 2; count <= n-1; i++)  
    {
    	//iteration para ver si c es primo o no;
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)  // c es primo
        {
           outputPrime << i << endl;;
		   printf("%d\n", i);
           count++;    
        }

    }
    return 0;
}
