#include <stdio.h>

int main()
{
//inicamos creando las variables necesarias
    int division,residuo = 0,numero,inver = 0,suma,cifras = 0;
    printf("inserte un numero entero postivo no mayor a 10000000000  ");
    scanf("%d",&numero);
//use un while para que solo se puedan ingresar numero enteros positivos, o numeros menores que 10^9,como indica el ejercicio  
    while (numero > 1000000000 || numero < 0)
    {
        printf("NUMERO NO VALIDO");
        printf("inserte un numero entero postivo no mayor a 10000000000  ");
        scanf("%d",&numero);
    }   
//un while para voltear el numero usando el residuo de la division del numero entre 10, multiplicandolo entre 10 y sumandolo con el residuo acumulado
    while (numero > 0)
        {
        division = numero /10;
        residuo = numero % 10;
        numero = division;
        residuo = inver + residuo;
        inver = residuo * 10;
//aqui iba contando las cifras para usar la variable mas adelante
        cifras = cifras +1;
        }
    inver = inver / 10;
    division = 0;
    residuo = 0;
// ya con el numero al revez sacamos el residuo del numero y vamos dividiendo al numero entre 10 para poder separar sus digitos
    while (inver > 0)
        {
        division = inver / 10;
        residuo = inver % 10;
        printf("%d",residuo);
        inver = division;
        suma = suma + residuo;
        cifras = cifras - 1;
//aqui use el numero que tenia guardado en cifras para que mientras cifras sea mayor que 0 se imprima un + entre los numeros,para que el ultimo numero no salga con +
        if (cifras > 0)
            {
            printf(" + ");
            }
        
        }
//e imprimimos la suma :D
    printf(" = %d",suma);
}

