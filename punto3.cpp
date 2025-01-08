#include<stdio.h>
int main()
{
    int numero, i = 0;
    printf("ingrese el numero que desea saber si es cuadrado perfecto\n");
    scanf("%d",&numero);

    for (i = 0 ;i * i <= numero; i++)
    {
        if (i * i == numero)
            {
                printf("el numero %d es un cuadrado perfecto ya que su raiz es %d^2\n",numero,i);
                return 0;
            }
    }
    printf("el numero %d no es un cuadrado perfecto\n",numero);
    i = i -1;
    i = i * i;
    printf("el numero entero anterior a %d que es un cuadrado perfecto es %d",numero,i); 
}