#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int filas, columnas,i,j;
    srand(time(NULL));
    printf("Inserte el numero de filas de la matriz\n");
    scanf("%d",&filas);
    printf("Inserte el numero de columnas de la matriz\n");
    scanf("%d",&columnas);
    int M[filas][columnas];
    for ( i = 0; i < filas; i++)
    {
        for ( j = 0; j < columnas; j++)
        {
            M[i][j] = rand () %100;
        }
    }
    printf("La matriz es \n");
    for ( i = 0; i < filas; i++)
    {
        for ( j = 0; j < columnas; j++)
        {
            printf(" %d ",M[i][j]);
        }
        printf("\n");
    }
    printf("La matriz transpuesta es \n");
    for ( i = 0; i < columnas; i++)
    {
        for ( j = 0; j < filas; j++)
        {
            printf(" %d ",M[j][i]);
        }
        printf("\n");
    }
    
}