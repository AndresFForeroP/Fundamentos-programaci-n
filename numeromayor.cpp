#include<stdio.h>
int main()
{
    int cantidadn, conteo = 0, numero, mayor = 0;

    printf("inserte la cantidad de numeros de los cuales desea saber cual es el mayor\n");

    scanf("%d",&cantidadn);

    while (cantidadn > conteo)
    {
        printf("inserte el numero\n");

        scanf("%d",&numero);

        conteo = conteo + 1;

        if (numero > mayor)
        {
            mayor = numero;
        }
        
    }
    printf("el numero mayor es %d",mayor);

    return 0;
}