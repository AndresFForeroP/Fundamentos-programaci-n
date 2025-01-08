#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n,x,mayor,menor;
    srand(time(0));
    printf(" inserte la cantidad de numeros que desea\n");
    scanf("%d",&n);
    int numeros[n];
    for (x=0;x < n; x++)
    {
        numeros[x]= rand() % 100;
    }
    for (x=0;x < n; x++)
    {
        if (numeros[x] > numeros[x -1])
        {
            mayor = numeros[x];
        }
        if (numeros[x] < numeros[x -1])
        {
            menor= numeros[x];
        }
    }
    printf("el numero mayor es %d y el numero menor es %d",mayor,menor);
}   