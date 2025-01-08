#include<stdio.h>
int main()
{
    int num;
    printf("inserte el numero de la accion que desea realizar\n");
    printf("1.Numero pares 2.numeros impares 3.salir\n");
    scanf("%d",&num);
    while (num == 0 || num > 3)
    {
        printf("Inserte un numero valido\n");
        printf("inserte el numero de la accion que desea realizar\n");
        printf("1.Numero pares 2.numeros impares 3.salir\n");
        scanf("%d",&num);
    }
    if (num == 1)
    {
        int numero, i;
        printf("seleccionaste numeros pares\n");
        printf("Inserte el numero al cual desea sacarle los numeros pares\n");
        scanf("%d",&numero);
        printf("Los numeros pares de %d son\n",numero);
        for ( i = 1; i <= numero; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n",i);
            }
            
        }
        
    }
    if (num == 2)
    {
        int numero, i;
        printf("Seleccionaste numeros impares\n");
        printf("Inserte el numero al cual desea sacarle todos los numeros impares\n");
        scanf("%d",&numero);
        printf("Los numeros impares de %d son \n",numero);
        for ( i = 1; i <= numero; i++)
        {
            if (i % 2 == 0)
            {
            }
            else
            {
                printf("%d\n",i);
            }
        }
        
    }
    if (num == 3)
    {
        printf("Usted ha seleccionado la opcion salir\n");
    }
    
    return 0;
}