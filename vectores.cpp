#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float mediaf (int x[], int ndatos)
{
float med = 0;
int i;
for ( i = 0; i < ndatos; i++)
{
    med = x[i] + med;
}
med = med / ndatos;
return med;
}
int menorf ( int x[], int ndatos)
{
    int i;
    int menor = x[0];
    for (i = 0; i < ndatos; i++)
    {
        if (x[i] <= menor)
        {
            menor = x[i];
        }
    }
    return menor;
}
int mayorf (int x [],int ndatos)
{
    int i;
    int mayor = x[0];
    for ( i = 0; i < ndatos; i++)
    {
        if (x[i] >= mayor)
        {
            mayor = x[i];
        }
    }
    return mayor ;
}

float desviacionf(int x [],int ndatos, float media)
{
    int i;
    float sumadesvi,desviacion = 0;
    for (i = 0; i < ndatos; i++)
    {
        sumadesvi = pow((x[i] - media),2);
        desviacion = sumadesvi + desviacion;
    }
    desviacion = sqrt(desviacion/ndatos);
    return desviacion;
}
int medianaf  ( int x[], int ndatos)
{
    int aux,i,mediana,j;
    for ( i = 0; i < ndatos -1; i++)
    {
        for ( j = 0; j < ndatos - i -1; j++)
        {
            if ( x[j] > x[j+1])
            {
                aux = x[j+1];
                x[j+1] = x[j];
                x[j] = aux;
            }
        }
    }  
    printf("Los numeros orenados de menor a mayor son  ");
    for ( i = 0; i < ndatos; i++)
    {
        printf(" %d ",x[i]);
    }
    
    mediana = x[(ndatos/2)];
    return mediana;
}
int main()
{
    int n,i;
    srand(time(0));
    printf("Ingrese la cantidad de numeros infinitos de los cuales desea sacarle la media   ");
    scanf("%d",&n);
    int numeros[n];
    for (i = 0; i < n; i++)
    {
        numeros[i]= rand() % 100;
        printf(" %d ",numeros[i]);        
    }
    float media = mediaf(numeros,n);
    printf("\nLa media de los numeros es %.3f\n",media);
    int menor = menorf(numeros,n);
    printf("El numero menor es %d\n",menor);
    int mayor = mayorf(numeros,n);
    printf("EL numero mayor es %d\n",mayor);
    float desviacion = desviacionf(numeros,n,media);
    printf("La desviacion estandar es %.3f\n",desviacion);
    int mediana = medianaf(numeros,n);
    printf("\nLa mediana de los datos es %d",mediana);
}