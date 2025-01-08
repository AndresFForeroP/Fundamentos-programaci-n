#include<stdio.h>
int main()
{
    int numero, numerodatos = 1;
    float  media, suma = 0.0 , dato;

    printf("inserte la cantidad de numero al cual desea sacarle la media\n");
    scanf("%d",&numero);
    printf("ingrese el primer numero\n");
    scanf("%f",&dato);

    while (numero > numerodatos)
    {
        suma = dato + suma;
        numerodatos = numerodatos + 1;
        printf("inserte el siguiente numero\n");
        scanf("%f",&dato);
    }

    suma = dato + suma;
    media = suma/numero;

    printf("la media de los numero es %f",media);

    return 0;

}