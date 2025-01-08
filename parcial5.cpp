#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
//cree las variables, la variable suma y media se creo en float por que es un numero real
    int n;
    float suma = 0 , media = 0;
//srand permite que la generacion de numeros aleatoris siempre sea distinta
    srand(time(0));
    printf("Inserte la cantidad de numeros aleatorios de los que desea encontrar la media   ");
    scanf("%d",&n);
//while para que el programa solo acepte numeros enteros positivos
    while (n < 0)
    {
        printf("ERROR NUMERO INVALIDO SOLO ENTEROS POSITIVOS");
        printf("Inserte la cantidad de numeros aleatorios de los que desea encontrar la media");
        scanf("%d",&n);
    }
    int numeros[n];
    printf ("De los numeros generados\n");
//creo el vector y le establesco el tamaño que me dio el usuario, luego lleno cada espacio del vector con un numero aleatorio entre 0 y 10 y los imprimimos
    for (int i = 0; i < n; i++)
    {
        numeros[i] = rand () % 10 ;
        printf(" %d ",numeros[i]);
    }
//organizamos el vector de mayor a menor y lo imprimimos
        for (int i = 0; i < n; i++)
            {
            int aux;
            for (int j = 0; j < n - i - 1; j++)
                {
                if (numeros[j] < numeros[j+1])
                    {
                    aux = numeros[j+1];
                    numeros[j+1] = numeros[j];
                    numeros[j] = aux;
                    }
                }   
            }
    printf("\nlos numeros ordenados de mayor a menor son\n");
    for (int i = 0; i < n; i++)
        {
        printf(" %d ",numeros[i]);
        }
//en este for comienzo a sumar todos los espacios del vector
    printf("\n");
    for (int i = 0; i < n; i++)
        {
        suma = suma + numeros[i];
        }
//y con la suma de todos saco la media y la imprimo 
    media = suma / n;
    printf("la media es %.3f\n",media);
    printf("los numero mayores a la media son \n");
//y con el if me aseguro de que se impriman solo los numeros mayores de la media y como ya esta ordenado los numeros van a salir de mayor a menor :D
    for (int i = 0; i < n; i++)
        {
        if (numeros[i] > media)
            {
            printf(" %d ",numeros[i]);
            }
        }
}