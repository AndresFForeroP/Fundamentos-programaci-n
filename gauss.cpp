#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nf,nc;
    printf("inserte el numero de filas de la matriz ");
    scanf("%d",&nf);
    printf("inserte el numero de columnas de la matriz ");
    scanf("%d",&nc);
    int matriz[nf][nc];
    for (int i = 0; i < nc; i++)
    {
        for (int y = 0;y < nf; y++)
        {
            printf("escriba el numero que desea en la columna %d fila %d ",i + 1,y + 1);
            scanf("%d",&matriz[i][y]);
        }
    }
    printf("la matriz que ha escrito es \n");
    for (int i = 0; i < nc; i++)
    {
        for (int y = 0;y < nf; y++)
        {
            printf(" %d ",matriz[i][y] );
        }
        printf("\n");
    }
}