#include <stdio.h>
#include <stdlib.h>
 
int main()
{
// iniciamos creando las variables necesarias,numero es el que da el usuario y las otras variables las usaremos mas adelante
    int numero,residuo,division = 1,inver = 0;
    printf("inserte el numero entero entre 0 y 3999 que desea convertir en numero romano ");
    scanf("%d",&numero);
//aca use un while para que solo se puedan usar numeros entre 0 y 3999
    while (numero < 0  || numero > 3999)
    {
        printf("NUMERO NO VALIDO");
        printf("inserte el numero entero entre 0 y 3999 que desea convertir en numero romano   ");
        scanf("%d",&numero);
    }
//aca inverti el numero para usar su recidio para sacar el numero romano
    division = numero * 10;
    while (division > 0)
    {
        division = division / 10;
        residuo = division % 10;
        residuo = inver + residuo;
        inver = residuo * 10;
    }
    inver = inver/ 100;
    printf("el numero %d en romano es\n",numero);
    division = inver;
//ya con el numero invertido inicie un while para usar el residuo del numero invertido para sacar cada letra del numero romano final
   while (division > 0)
   {
    residuo = division % 10;
//este if sirve para que que si el numero es mayor que mill la primera cifra que imprima el programa sea el 1000 de numero romano
    if (division > 1000)
    {
        if (residuo == 1)
        {
            printf("M");
        }
        if (residuo == 2)
        {
            printf("MM");
        }
        if (residuo== 3)
        {
            printf("MM");
        }
        division = division/10;
        residuo = division % 10; 
    }
//cada vez que se cumpla el if el numero se va dividiendo entre 10 para que el residuo de la division sea distinto y cuando llegue a 0 pare
    if (division > 100 && division < 1000)
    {
        if (residuo == 1 )
        {
            printf("C");
        }
        if (residuo == 2)
        {
            printf("CC");
        }
        if (residuo == 3)
        {
            printf("CCC");
        }
        if (residuo == 4)
        {
            printf("CD");
        }
        if (residuo == 5)
        {
            printf("D");
        }
        if (residuo == 6)
        {
            printf("DC");
        }
        if (residuo == 7)
        {
            printf("DCC");
        }
        if (residuo == 8)
        {
            printf("DCCC");
        }
        if (residuo == 9)
        {
            printf ("CM");
        }
        division = division/10;
        residuo = division % 10;   
    }
    if (division > 10 && division < 100)
    {
        if (residuo == 1 )
        {
            printf("X");
        }
        if (residuo == 2)
        {
            printf("XX");
        }
        if (residuo == 3)
        {
            printf("XXX");
        }
        if (residuo == 4)
        {
            printf("XL");
        }
        if (residuo == 5)
        {
            printf("L");
        }
        if (residuo == 6)
        {
            printf("LX");
        }
        if (residuo == 7)
        {
            printf("LXX");
        }
        if (residuo == 8)
        {
            printf("LXXX");
        }
        if (residuo == 9)
        {
            printf ("XC");
        } 
        division = division/10;
        residuo = division % 10; 
    }
    if (division > 0 && division < 10)
    {
         if (residuo == 1 )
        {
            printf("I");
        }
        if (residuo == 2)
        {
            printf("II");
        }
        if (residuo == 3)
        {
            printf("III");
        }
        if (residuo == 4)
        {
            printf("IV");
        }
        if (residuo == 5)
        {
            printf("V");
        }
        if (residuo == 6)
        {
            printf("VI");
        }
        if (residuo == 7)
        {
            printf("VII");
        }
        if (residuo == 8)
        {
            printf("VIII");
        }
        if (residuo == 9)
        {
            printf ("IX");
        }
        division = division/10;
        residuo = division % 10;
    }
// para este punto ya se imprimo el numero romano y ya :D
   }
}