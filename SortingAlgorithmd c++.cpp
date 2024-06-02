//Juarez Ramirez Luis Enrique
//ESCOM IPN
//2019630346
//LICENCIATURA EN CIENCIA DE DATOS
//2AV1
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

void intercambiar(int *a, int *b) {
  int temporal = *a;
  *a = *b;
  *b = temporal;
}

void seleccion(int arr[], int n) 
{ 
    int i, j, min_idx; 
 
    for (i = 0; i < n-1; i++) 
    {  
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 
        intercambiar(&arr[min_idx], &arr[i]); 
    } 
} 
void burbuja(int arr[], int longitud) {
  for (int x = 0; x < longitud; x++) {
    for (int indiceActual = 0; indiceActual < longitud - 1;
         indiceActual++) {
      int indiceSiguienteElemento = indiceActual + 1;
      if (arr[indiceActual] > arr[indiceSiguienteElemento]) {
        intercambiar(&arr[indiceActual], &arr[indiceSiguienteElemento]);
      }
    }
  }
}
void Insercion(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void ImprimirArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
   //arreglos tewmporales
    int L[n1], R[n2];
  //copiando data a los arreglos temporales
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    //Mezclar los arreglos temporales dentro del arrar [l..r]
    i = 0; 
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  //Copiando los restantes elementos de L[] si queda alguno
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
//l es el index izquierdo y r por el lado derecho

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
  
        merge(arr, l, m, r);
    }
}


int Ordenamiento(int array[], int bajo, int alto) 
{
  int pivote = array[alto];
  int i = (bajo - 1);
  for (int j = bajo; j < alto; j++) {
    if (array[j] <= pivote) 
	{
      i++;
      intercambiar(&array[i], &array[j]);
    }
  }
 intercambiar(&array[i + 1], &array[alto]);
  return (i + 1);
}
void rapido(int array[], int bajo, int alto)
{
  if (bajo < alto) 
  {
    int pi = Ordenamiento(array, bajo, alto);
    rapido(array, bajo, pi - 1);
    rapido(array, pi + 1, alto);
  }
}
int main(){
   
 puts("Elije la opcion deseada:                           \n");
 puts("1 . Ordenar arreglo por Metodo de Insercion        \n");
 puts("2 . Ordenar arreglo por Metodo Burbuja             \n");
 puts("3 . Ordenar arreglo por Metodo Seleccion           \n");
 puts("4 . Ordenar arreglo por Metodo Merge Sort (Mezcla) \n");
 puts("5 . Ordenar arreglo por Metodo Quick Sort          \n");
 int op=0;
 scanf("%d",&op);

   switch (op){
case 1:{
		int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Insercion(arr, n);
    ImprimirArray(arr, n);
    break;
}
case 2:{
  int arr[] = { 1,1,1,0,0,0,9 };
  int longitud = sizeof arr / sizeof arr[0];
  burbuja(arr, longitud);
  ImprimirArray(arr, longitud);
  return 0;
		break;
	}
	case 3:{
       int arr[] = {64, 25, 12, 22, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    seleccion(arr, n); 
    cout << "Arreglo Ordenado: \n"; 
    ImprimirArray(arr, n); 
    return 0; 
		break;
	}
    	case 4:{
    		int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
  
    printf("Los numeros dados son \n");
   ImprimirArray(arr, arr_size);
  
    mergeSort(arr, 0, arr_size - 1);
  
    printf("\nEl arreglo ordenado es \n");
    ImprimirArray(arr, arr_size);
    return 0;
  
	}
	  	case 5:{
	   int datos []= {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(datos) / sizeof(datos[0]);
  
  printf("Arreglo sin ordenamiento\n");
  ImprimirArray(datos, n);
  
  // perform quicksort on data
  rapido(datos, 0, n - 1);
  
  printf("Arreglo Ordenado: \n");
  ImprimirArray(datos, n);
	
   }
}
	}

