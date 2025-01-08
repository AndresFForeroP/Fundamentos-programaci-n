#include <stdio.h> 
int main ()
{

float numero, numerosumas= 0, suma = 0;

printf("ingrese el numero\n");
scanf("%f",&numero);
    while (numero > numerosumas)
    {
        numerosumas = numerosumas + 1;
        suma = (numerosumas * numerosumas) + suma;
    }
printf("el resultado de la sumatoria es %f",suma);

return 0;

}
