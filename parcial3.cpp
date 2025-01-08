#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//establezco las variables que voy a usar en el ejercicio, use el long int por que el rango del resultado puede ser muy amplio
    long int base,exponente,suma = 0,potencia;
    printf("Inserte un numero entre 1 y 100 para usar como base del ejercicio   ");
    scanf("%li",&base);
//use el while para que el programa solo pueda recibir en base numeros entre 1 y 100 y en exponente numeros entre 0 y 1000000
    while (base > 100 || base < 1)
    {
        printf("NUMERO DE BASE NO VALIDO\n");
        printf("Inserte un numero entre 1 y 100 para usar como base del ejericicio   ");
        scanf("%li",&base);
    }
    printf("Inserte un numero entre 0 y 1000000 para usar como exponente   ");
    scanf("%li",&exponente);
    while (exponente > 1000000 || exponente < 0)
    {
        printf("NUMERO DE EXPONENTE NO VALIDO\n");
        printf("Inserte un numero entre 0 y 1000000 para usar como exponente   ");
        scanf("%li",&exponente);
    }
//use un for para realizar la potencia desde 0 hasta el numero que den como exponente y use la variable suma para ir sumando el resultado
    for (int i = 0; i < exponente + 1 ; i++)
    {
        potencia = pow(base,i);
        suma = suma + potencia;
    }
//y imprimir :D    
    printf("Con base %li y exponente %li el resultado es = %li",base,exponente,suma);
}