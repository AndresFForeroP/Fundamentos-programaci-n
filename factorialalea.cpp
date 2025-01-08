#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n,x,suma,i,y;
    srand(time(0));
    printf("inserte la cantidad de numeros que desea usar\n");
    scanf("%d",&n);
    int numeros[n];
    for ( x = 0; x < n; x++)
    {
        numeros[x]= rand () % 100;
        if (numeros[x] < 10)
        {
            suma = 1;
            y = 0;
            for ( i = 1; i <= numeros[x] ; i++)
            {
                suma = suma + y;
                y = suma  * i;              
            }
        printf("el numero %d es menor que 10 y su factorial es %d\n",numeros[x],suma);   
        }
    }   
}