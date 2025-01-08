#include <stdio.h>
#include <stdlib.h>
int main()
{
//iniciamos poniendo las variables, numero es el numero que entra,conteo lo use para contar cuantos numeros me quedaban,y Y la use para almacenar el valor de conteo
    int numero,conteo = 0,y = 0;
    printf(" inserte un numero mayor o igual que 2 y menor que 100.000  ");
    scanf("%d",&numero);
// use un while para que solo se pudieran ingresar numeros mayores que 2 y menores que 100.000
    while (numero < 2 || numero > 100.000)
        {
        printf("NUMERO NO VALIDO\n");
        printf(" inserte un numero mayor o igual que 2   ");
        scanf("%d",&numero);
        }
// cree el vector y lo llene 
    int numeros[numero];
    for (int  i = 0; i < numero; i++)
        {
        numeros[i]= i+1;
        }
//como el problema lo permitia volvi 0 todos los numeros impares del vector 
    for (int i = 0; i < numero; i++)
        {
        if (numeros[i] % 2 == 0 )
            {
            conteo = conteo + 1;
            }
        else
            {
            numeros[i] = 0;
            }  
        }
// inice un for para que el siguiente procedimiento se ejecutara hasta que terminara
    for (int x = 3; x < conteo; x++)
        {    
// inicialice Y aqui para que cada vez que el for cambiara el numero  x Y volviera a iniciar en 0
            y = 0;
//inicie otro for para ordenar los numeros de mayor a menor,para dejar a todos los 0 en los ultimos espacios del vector
            for (int i = 0; i < numero; i++)
                {
                int aux;
                for (int j = 0; j < numero - i - 1; j++)
                    {
                    if (numeros[j] < numeros[j+1])
                        {
                        aux = numeros[j+1];
                        numeros[j+1] = numeros[j];
                        numeros[j] = aux;
                        }
                    }   
                }
//otro for para reorganizar los numeros de menor a mayor pero solo hasta conteo para que los 0 de los ultimos vectores no interfieran
            for (int i = 0; i < conteo; i++)
                {
                int aux;
                for (int j = 0; j < conteo - i - 1; j++)
                    {
                    if (numeros[j] > numeros[j+1])
                        {
                        aux = numeros[j+1];
                        numeros[j+1] = numeros[j];
                        numeros[j] = aux;
                        }
                    }
                }
//este for es el que hace el ejercicio, va contando y comienza quitando los numeros cada 3, luego cada 4 ... etc hasta que la cantidad de numeros lo permita
        for (int i = 0; i < conteo; i++)
            {
            if (i  % x == 0)
                {
                numeros[i] = 0; 
                }
//cada vez que un numero sea distinto de 0 a Y se le agrega 1, esto permirio ir almacendo el conteo de los numeros que iban saliendo y almacenarlos en la variable conteo
            else
                {
                y = y +1;
                }
            }
        conteo = y;
        }
//el ultimo orden es para ordenar los numeros de mayor a menor,se realizo desde el espacio 0 hasta el numero que tenia almacenado la variable conteo
    for (int i = 0; i < conteo; i++)
        {
        int aux;
        for (int j = 0; j < conteo - i - 1; j++)
            {
                if (numeros[j] < numeros[j+1])
                    {
                    aux = numeros[j+1];
                    numeros[j+1] = numeros[j];
                     numeros[j] = aux;
                    }
            }   
        }
//ya ordenado, evitamos los numeros 0 de algunos numeros e imprimimos :D
    printf("%d: ",numero);
    for (int i = 0; i < conteo; i++)
        {
        if (numeros[i] !=0)
            {
            printf(" %d ",numeros[i]);
            }
        }
}