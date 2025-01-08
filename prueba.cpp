#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double factorial(int numero)
{
    double res = 1;
    for (int i = 2; i <= numero; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    printf("Calculadora: 1.Seno 2.Coseno 3.Tangente 4.salir ");
    int entrada;
    double resultado = 0.0,numero;
    scanf("%d",&entrada);
    if (entrada == 1)
    {
        printf("Elegiste calcular el seno \n");
        printf("Ingrese el numero en grados al cual desea calcularle el seno ");
        scanf("%lf",&numero);
        numero = numero * (M_PI /180);
        printf("%f",numero);
        for (int i = 0; i < 100; i++)
        {
            resultado += pow(-1,i) * pow(numero,2*i+1) / factorial(2*i+1);
        }
        printf("el seno es %f",resultado);
    }
}
