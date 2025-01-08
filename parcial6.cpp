#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
// inicie variable numero para el numero atomico y la variable elemento para el nombre del elemento
    int numero;
    char elemento[50];
// este while es para que se repita y puse un if para cuando se ingrese la palabra Exit o exit el programa termine
    while (1)
    {
    printf("Escriba el nombre del elemento quimico o escriba exit para salir del programa ");
    scanf("%s",elemento);
    if (strcmp(elemento, "exit" ) == 0)
    {
        printf("saliste del programa");
        break;
    }
    printf("Inserte el numero atomico del %s  ",elemento);
    scanf("%d",&numero);
// while para que solo se puedan ingresar numeros validos
    while (numero > 118 || numero < 0)
    {
        printf("ERROR NUMERO INVALIDO INSERTE NUMERO ENTRE 0 Y 118");
        printf("Inserte el numero atomico del %s  ",elemento);
        scanf("%d",&numero);
    }
    printf("El numero atomico del %s es %d y su configuracion electronica es\n",elemento,numero);
// use muchos if para para imprimir segun su ultimo nivel de energia, quedo larguito pero funciona :D
// este if sirve para llenar el primer subnivel s
    if (numero <= 2)
    {
        printf("1s%d\n",numero);
    }
//este el segundo subnivel s como el nivel s solo tiene dos espacios solo son dos numeros esto se hace en cada subnivel s
    if (numero > 2 && numero <= 4)
    {
        printf("1s2 2s%d",numero - 2);
    }
//como el subnivel p tiene 6 subniveles entonces aca son 6 numeros y se hace cada vez que aparece un p
    if (numero > 4 && numero <= 10)
    {
        printf("1s2 2s2 2p%d",numero - 4);
    }
    if (numero > 10 && numero <= 12 )
    {
        printf("1s2 2s2 2p6 3s%d",numero - 10);
    }
    if (numero > 12 && numero <=18)
    {
        printf("1s2 2s2 2p6 3s2 3p%d",numero - 12);
    }
    if (numero > 18 && numero <= 20)
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s%d",numero - 18);
    }
//como el subnivel d tiene 10 espacios entonces aca son 10 numeros y se hace cada vez que aparece un d
    if (numero > 20 && numero <= 30)
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d%d",numero - 20);
    }
    if (numero > 30 && numero <= 36)
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p%d",numero - 30);
    }
    if (numero > 36 && numero <= 38)
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s%d",numero - 36);
    }
    if (numero > 38 && numero <= 48)
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d%d",numero - 38);
    }
    if (numero > 48 && numero <= 54)
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p%d",numero - 48);
    } 
    if (numero > 54 && numero <= 56)
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s%d",numero - 54);
    }
    if (numero > 56 && numero <= 70)
    {
//como el subnivel f tiene 14 subniveles entonces aca son 14 numeros y se hace cada vez que aparece un f
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f%d",numero - 56);
    }
    if (numero > 70 && numero <= 80 )
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d%d",numero - 70);
    }
    if (numero > 80 && numero <= 86)
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p%d",numero - 80);
    }
    if (numero > 86 && numero <= 88)
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s%d",numero - 86);
    }
    if (numero > 88 && numero <= 102)
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f%d",numero - 88);
    }
    if (numero > 102 && numero <= 112 )
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d%d",numero - 102);
    }
    if (numero > 112)
    {
        printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d10 7p%d",numero - 112);
    }
    printf("\n");
    }
}