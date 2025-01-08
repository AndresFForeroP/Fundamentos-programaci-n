#include<stdio.h>
int main()
{
    int numero, division, residuo, resultado = 0;

    printf("inserte el numero al que desea invertir\n");

    scanf("%d",&numero);

    while (numero > 0)
    {
        division = numero / 10;

        residuo = numero % 10;

        numero = division;

        residuo = resultado + residuo;

        resultado = residuo * 10;
    }

    resultado = resultado/10;

    printf("su numero al revez es %d",resultado);

    return 0;
}