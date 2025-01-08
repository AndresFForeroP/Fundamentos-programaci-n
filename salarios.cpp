#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct jugadores
{
    char nombre[100];
    int salario;
}nombre,salario;

int main()
{
    int n = 22;
    FILE *archivo;
    char path[100] = "listaSalarios.txt";
    archivo = fopen(path,"r");
    jugadores lista[100];
    if (archivo == NULL)
    {
        printf("El archivo de salarios no existe\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
    fscanf(archivo, "%s %d", &(lista[i].nombre), &(lista[i].salario));
    }
    for (int i = 0; i < n; i++)
    {
    cout <<lista[i].nombre<< " tiene un salario de " << lista[i].salario << "\n";
    }
}