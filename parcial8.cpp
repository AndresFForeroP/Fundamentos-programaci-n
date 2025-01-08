#include <stdio.h>
//esta es la funcion de año bisiesto  a es año, queria poner año pero el programa no lee la ñ xD
//en esta funcion entra el año y comprueba si el año es divisible entre 4 para saber si es bisiesto
//busque y si el año tambien es divisible entre 100 tiene que ser divisble entre 400 para que sea bisiesto 
// si el año no es bisiesto la salida es 0 y si es bisiesto la salida es 1
int bis (int a)
{
    int bi = 0;
    if (a % 4 == 0 && (a % 100 == 0 && a % 400 == 0))
    {
        bi = 1;
    }
    return bi;
}
// funcion de los meses, cree un vector para almacenar cuantos dias tiene  cada mes 
// lo hice funcion por que febrero puede tener 28 0 29 dependiendo si el año es bisiesto o no
// entre el mes y el año y salen los dias del mes
int diames (int mes,int a )
{
    int diasmes[] = {0,31, 28 + bis(a), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return diasmes[mes];
}
int main()
{
//funciones para preguntar al usuario la fecha y la cuanta de dias
    int d1,m1,a1,dias = 0;
    printf("ingrese la fecha de partida (DD/MM/YYYY) ");
    scanf("%d %d %d",&d1,&m1,&a1);
    // use while para que el usuario solo pueda ingresar fechas validas 
    while (d1 > 31 || m1 > 12 || a1 > 9999 || d1 <= 0 || m1 <= 0 || a1 <= 0 )
    {
        printf("fecha no valida el valor maximo para la fecha es (31/12/9999) y como minimo (1/1/1) ");
        scanf("%d %d %d",&d1,&m1,&a1);
    }
    int d2,m2,a2;
    printf("ingrese la fecha final (DD/MM/YYYY)   ");
    scanf("%d %d %d",&d2,&m2,&a2);
    while (d2 > 31 || m2 > 12 || a2 > 9999 || d2 <= 0 || m2 <= 0 || a2 <= 0 )
    {
        printf("fecha no valida el valor maximo para la fecha es (31/12/9999) y como minimo (1/1/1) ");
        scanf("%d %d %d",&d2,&m2,&a2);
    }
//aca comienzo a contar los dias, comenzando por los dias de año
//la cuenta es desde el año inicial hasta el año final
//si el año era bisiesto se le sumaba uno a los dias
    for (int i = a1; i < a2; i++)
    {
        dias = 365 + bis(i) + dias;
    }
//esta cuenta es para contar desde el mes inicial hasta diciembre 
//a la cuenta le resto los dias del primes mes para que solo se le sumen los dias que el faltan
    for (int  i = m1 ; i <= 12; i++)
    {
        dias = diames(i,a1) + dias - d1 + 1;
        d1 = 1;
    }
//esta cuenta es desde enero hasta el mes final 
    for (int i = 1; i < m2 ; i++)
    {
       dias = diames(i,a2) + dias;
    }
//al final le sumo los dias del ultimo mes 
    dias = dias + d2;  
// y imprimir :D
    printf("desde %d/%d/%d hasta %d/%d/%d hay %d dias",d1,m1,a1,d2,m2,a2,dias);
}