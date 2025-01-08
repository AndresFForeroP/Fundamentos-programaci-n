#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimir(float vec[], int ndatos)
{
    for (int i = 0; i < ndatos; i++)
    {
        printf("%.2f",vec[i]);
    }
    printf("\n");
}
float af(float estatura[],float pesos[], int ndatos)
{
    float xx = 0,xy = 0,y = 0,x = 0,a;
    for ( int i = 0; i < ndatos; i++)
    {
        xx = xx + pow(estatura[i],2);
    }
    for (int i = 0; i < ndatos; i++)
    {
        xy = xy + estatura[i] * pesos[i];
    }
    for (int i = 0; i < ndatos; i++)
    {
        y = y + pesos[i];
    }
    for ( int i = 0; i < ndatos; i++)
    {
        x = x + estatura[i];
    }
    a = ((xx *y) - (xy * x))/((xx * ndatos) - pow(x,2)); 
    return a;
}
float bf(float estatura[],float pesos[],int ndatos)
{
  float xx = 0,xy = 0,y = 0,x = 0,b;
    for ( int i = 0; i < ndatos; i++)
    {
        xx = xx + pow(estatura[i],2);
    }
    for (int i = 0; i < ndatos; i++)
    {
        xy = xy + estatura[i] * pesos[i];
    }
    for (int i = 0; i < ndatos; i++)
    {
        y = y + pesos[i];
    }
    for ( int i = 0; i < ndatos; i++)
    {
        x = x + estatura[i];
    }
    b = ((ndatos * xy)-(y * x))/((ndatos * xx)- pow(x,2));
    return b;

}
int main()
{
    int ndatos;
    FILE *archivo;
    char path[100] = "estaturas.txt";
    archivo = fopen(path, "r");
    if (archivo == NULL)
    {
        printf("el archivo %s no existe\n", path);
    }
    else
    {
        fscanf(archivo, "%d",&ndatos);
        printf("leyendo %d lineas:\n",ndatos);
        float estaturas[ndatos], pesos[ndatos];
        for (int i = 0; i < ndatos; i++)
        {
            fscanf(archivo,"%f %f", &estaturas[i], &pesos[i]);
        }
        imprimir(estaturas,ndatos);
        imprimir(pesos,ndatos);
        float a = af(estaturas,pesos,ndatos);
        printf ("%.3f\n",a);
        float b = bf(estaturas,pesos,ndatos);
        printf ("%.3f\n",b);
    }
    
}