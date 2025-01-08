#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n = 100, i, n1 = 0 , n2 = 0;
    float sumapar = 0.0, mediapar, mediaimp, sumaimp = 0;
    srand(time(0));
    int A[n];

    for ( i = 0; i < n; i++ )
        {
            A[i] = rand () % 100;  
        }
    for ( i = 0; i < n; i++ )
        {
            if (A[i] % 2 == 0)
                {
                    sumapar = A[i] + sumapar;
                    n1 = n1 + 1;
                }
    
            else
                {
                    sumaimp = A[i] + sumaimp;
                    n2 = n2 + 1;
                }
        }
        mediapar = sumapar/n1;
        mediaimp = sumaimp/n2;
        printf("la media de los numeros pares es %.3f\n",mediapar);
        printf("la media de los numeros impares es %.3f\n",mediaimp);
    return 0;
}