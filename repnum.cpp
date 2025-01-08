#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n,x;
    srand(time(0));
    printf(" inserte la cantidad de numeros que desea\n");
    scanf("%d",&n);
    int numeros[n], repetir[100] = {0};

    for (x=0;x < n ; x++)
    {
        numeros[x]= rand() % 100;
    }
    for ( x = 0; x < n; x++)
    {
        repetir[numeros[x]]++;
    }
    for ( x = 0; x < 100; x++)
    {
        if (repetir[x] > 0)
        {
            printf("el numero %d aparece %d veces\n",x,repetir[x]);
        }
        
    }
    
}    
