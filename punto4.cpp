#include<stdio.h>
int main()
{
    long int numero, residuo, suma = 1, division, base2 = 0, base4 = 0, base8 = 0;
    printf("ingrese el numero que desea convertir a base 2,4,8,16\n");
    scanf("%ld",&numero);
    division = numero ;
        while (division > 0)
            {  
                residuo = division % 2;
                division = division / 2;
                base2 = base2 + (residuo * suma);
                suma = suma * 10;
            }
    printf("el numero %ld en binario es %ld\n",numero,base2);
    division = numero;
    suma = 1;
    residuo = 0;
        while (division > 0)
            {
                residuo = division % 4;
                division = division / 4;
                base4 = base4 + (residuo * suma);
                suma = suma * 10;
            }
    printf("el numero %ld en base4 es %ld\n",numero,base4);
    division = numero;
    suma = 1;
    residuo = 0;
        while (division > 0)
        {
            residuo = division % 8;
            division = division / 8;
            base8 = base8 + (residuo * suma);
            suma = suma * 10;
        }
    printf("el numero %ld en base8 es %ld\n",numero,base8);
    division = numero;
    suma = 1;
    residuo = 0;
    
}