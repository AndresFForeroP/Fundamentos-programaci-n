#include<stdio.h>
int main()
{
    int n,d,i = 1;
    printf("ingrese el numero que desea saber si es primo o no\n");
    scanf("%d", &n);
    while (i > n)
    {
        if (n % i == 0)
        {
            d = d + 1;
        }
        i = i + 1;
    }
    if (d > 2)
    {
        printf ("%d no es primo\n",n);
    }
    else
    {
        printf("%d es primo\n",n);
    }
    return 0;
}