#include<stdio.h>
#include<stdlib.h>
struct Locacion
{
 char continente[30];
 char Pais[30];
 char ciudad[30];
};
typedef struct
{
    float duracion;
    int anio;
    char nombre[30],director[30];
    char clasifi[5];
    char genero[15];
     struct Locacion loc;
}Pelicula;

Pelicula registrarPelicula();
void imprimir(Pelicula pl1);

int main()
{
    int op;
    Pelicula pl;
    do{
        printf("\nPeliculas\n");
        printf("\n1.registrarPelicula\n");
        printf("\n2.Imprimir Pelicula\n");
        printf("\n2.Salir\n");
        printf("\n1.Ingresa la opcion\n");
        scanf("%d",&op);
        fflush(stdin);
        switch(op)
        {
            case 1:
            pl=registrarPelicula();
            break;
            case 2:
            imprimir(pl);
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("\n Opcion no valida\n");
        }
        
        
    }while(op!=3);
    return 0;
}

Pelicula registrarPelicula()
{
    Pelicula pl1;
    printf("\nIngresa los datos de la pelicula\n");
    printf("\n.Titulo\n");
    fgets(pl1.nombre,sizeof(pl1.nombre),stdin);
    printf("\nDirector:\n");
    fgets(pl1.director,30,stdin);
    printf("\nClasificacion\n");
    gets(pl1.clasifi);
    printf("\nGenero\n");
    gets(pl1.genero);
    //Locacion
    printf("\nIngresa los datos de la pelicula en su apartado de locacion\n");
    printf("\nContinente\n");
    gets(pl1.loc.continente);
    printf("\nPais\n");
    gets(pl1.loc.Pais);
    printf("\nCiudad\n");
    gets(pl1.loc.ciudad);
    return pl1;
    
    
}

void imprimir(Pelicula pl1)
{
    printf("\nLos datos de la estructura pelicula son\n");
    printf("\nTitulo:\n %s",pl1.nombre);
    printf("\nDirector:\n %s",pl1.director);
    printf("\nClasificacion:\n%s",pl1.clasifi);
    printf("\nGenero:\t %s",pl1.genero);
    printf("\nLos datos de la estructura pelicula/locacion\n");
    printf("\nContinente:\n %s",pl1.loc.continente);
    printf("\nPais:\n %s",pl1.loc.Pais);
    printf("\nCiudad:\n %s",pl1.loc.ciudad);
    
}

