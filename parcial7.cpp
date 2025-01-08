#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
// inicialimazos verbo y tiempo para los datos que da el usuario, temp lo cree para usarlo mas adelante para almacenar un caracter
// tambien puse el while con un if mas adelante para que el programa se repita hasta que se escriba T cuando se pida el tiempo
    char verbo[20],tiempo[2], temp[2], temp1[2];
    int lon2;
    while (1)
    {
        printf("inserte el verbo  ");
        scanf("%s",verbo);
//aca cree la variable lon y para sacar la longitud del verbo
        size_t lon = strlen(verbo);
        lon = lon - 2;
        lon2 = lon + 1;
        strncpy(temp, &verbo[lon],1);
        strncpy(temp1, &verbo[lon2],1);
        temp1[1]= '\0';
        temp[1]= '\0';
//a la variable lon le reste dos para saber que vocal estaba en esa posicion y almacene la vocal en temp 
//a la variable lon2 le reste uno para almacenar la ultima letra en temp1, si temp1 no era r la palabla no era un verbo 
// es este while se utiliza el temp1 para saber si la palabra es un verbo
        while (strcmp(temp1, "r") != 0)
        {
            printf("%s no es un verbo\n",verbo);
            printf("inserte el verbo  ");
            scanf("%s", verbo);
            lon = strlen(verbo);
            lon = lon - 2;
            lon2 = lon + 1;
            strncpy(temp, &verbo[lon],1);
            strncpy(temp1, &verbo[lon2],1);
            temp1[1]= '\0';
            temp[1]= '\0';     
        }
//en este while se ultiliza el temp para saber si es un verbo en presente simple
        while (strcmp(temp, "i") != 0 && strcmp(temp, "a") != 0 && strcmp(temp, "e") != 0 )
        {
            printf("%s no es un verbo en presente simple\n",verbo);
            printf("inserte el verbo  ");
            scanf("%s", verbo);
            lon = strlen(verbo);
            lon = lon - 2;
            lon2 = lon + 1;
            strncpy(temp, &verbo[lon],1);
            strncpy(temp1, &verbo[lon2],1);
            temp1[1]= '\0';
            temp[1]= '\0';
        }
        printf("inserte el tiempo en el que desea pasar el verbo\n");
        printf("Si desea que el programa termine ingrese T\n");
        printf("A = presente P = pasado F = futuro  ");
        scanf("%s",tiempo);
//este while es para que solo se pueda ingresar A, P, F  T cuando se le pide el tiempo del verbo al usuario
        while (strcmp(tiempo, "A") != 0 && strcmp(tiempo, "P") != 0 && strcmp(tiempo, "F") != 0 && strcmp(tiempo, "T") != 0)
        {
            printf("\nopcion invalida solo puede ingresar A , P o F\n");
            printf("Si desea que el programa termine ingrese T\n");
            printf("inserte el tiempo en el que desea pasar el verbo\n");
            printf("A = presente P = pasado F = futuro  ");
            scanf("%s",tiempo);
        }
//este if sirve para acabar el programa cuando el usuario ingrese T cuando se le pida el tiempo
        if (strcmp(tiempo, "T") == 0)
        {
            printf("Saliste del programa");
            break;
        }
//aca ya creo las condicionales para poder imprimir
//verbo es el verbo pero recortandole dos letras para poder formar las palabras ej; comer = com , esto para en el primer caso quede yo como y asi con cada caso
//cree verbo 2 y copie la palabra pero este solo le elimina una letra al verbo, este es para casos especiales ej: comer = come
// y ya :D
        char verbo2[20];
        strcpy(verbo2, verbo);
        verbo[lon] = '\0';
        verbo2[lon + 1] = '\0';
        if (strcmp(tiempo, "A") == 0)
        {
            if (strcmp(temp, "i") == 0)
            {
            printf("yo %s\n",verbo2);
            printf("tu %ses\n",verbo);
            printf("el %se\n",verbo);
            printf("nosotros %smos\n",verbo2);
            printf("vosostros %ss\n",verbo2);
            printf("ellos %sen\n",verbo);
            }
            else
            {
            printf("yo %so\n",verbo);
            printf("tu %ss\n",verbo2);
            printf("el %s\n",verbo2);
            printf("nosotros %smos\n",verbo2);
            printf("vosostros %sis\n",verbo2);
            printf("ellos %sn\n",verbo2);
            }
        }
        if (strcmp(tiempo, "P") == 0)
        {
            if (strcmp(temp, "e") == 0)
            {
            printf("yo %si\n",verbo);
            printf("tu %siste\n",verbo);
            printf("el %sio\n",verbo);
            printf("nosotros %simos\n",verbo);
            printf("vosostros %sisteis\n",verbo);
            printf("ellos %sieron\n",verbo); 
            }
            else
            {
            printf("yo %se\n",verbo);
            printf("tu %sste\n",verbo2);
            printf("el %so\n",verbo);
            printf("nosotros %smos\n",verbo2);
            printf("vosostros %ssteis\n",verbo2);
            printf("ellos %sron\n",verbo2);
            }
        }
        if (strcmp(tiempo, "F") == 0)
        {
            printf("yo %sre\n",verbo2);
            printf("tu %sras\n",verbo2);
            printf("el %sra\n",verbo2);
            printf("nosotros %sremos\n",verbo2);
            printf("vosostros %sreis\n",verbo2);
            printf("ellos %sran\n",verbo2);
        }
        
    } 
}