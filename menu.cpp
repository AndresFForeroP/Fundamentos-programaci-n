#include<stdio.h>
int main()
{
    int valor;
    printf("1.MCD   2.MCM   3.Mayor    4.Salir\n");

    printf("inserte el numero de la accion que desea realizar\n");

    scanf("%d",&valor);
    while (valor > 4 || valor <=0)
    {
        printf("error,por favor ingrese el numero de una opcion de menu\n");
        printf("1.MCD   2.MCM   3.Mayor    4.Salir\n");
        scanf("%d",&valor);
    }

    if (valor == 1)
    {
        int n1, n2, limite, MCD = 1, conteo;
        printf("Elegiste la opcion 1.MCD\n");
        printf("elije dos numeros a los cuales les quieres encontrar su maximo comun divisor\n");
        printf("inserta el primer numero\n");
        scanf("%d",&n1);
        printf("inserta el segundo numero\n");
        scanf("%d",&n2);
        if (n2 < n1)
        {
            limite = n2;
        }
        else
        {
            limite = n1;
        }

        for ( conteo = 2; conteo < limite; conteo++)
        {
            if (n1 % conteo == 0)
            {
                if (n2 % conteo == 0)
                {
                    MCD = conteo;
                }
                
            }
            
        }
        printf("El MCD entre %d y %d es %d",n1,n2,MCD);
    
    }
    if (valor == 2)
    {
        int n1, n2, limite, MCD = 1, conteo, multiplicacion,MCM;
        printf("Elegiste la opcion 2.MCM\n");
        printf("elije dos numeros a los cuales les quieres encontrar su maximo comun multiplo\n");
        printf("inserta el primer numero\n");
        scanf("%d",&n1);
        printf("inserta el segundo numero\n");
        scanf("%d",&n2);
        if (n2 < n1)
        {
            limite = n2;
        }
        else
        {
            limite = n1;
        }

        multiplicacion = n1 * n2;

        for ( conteo = 2; conteo < limite; conteo++)
        {
            if (n1 % conteo == 0)
            {
                if (n2 % conteo == 0)
                {
                    MCD = conteo;
                }
                
            }
            
        }
        MCM = multiplicacion/MCD;

        printf("El MCM entre %d y %d es %d",n1,n2,MCM);
    }
    if (valor == 3)
    {
        int cantidadn, conteo = 0, mayor = 0, numero;
        printf("Elegiste la opcion 3.Mayor\n");
        printf("inserte la cantidad de numeros de los cuales desea saber cual es el mayor\n");
        scanf("%d",&cantidadn);
        while (cantidadn > conteo)
        {
            printf("inserte el numero\n");
            conteo = conteo + 1;
            scanf("%d",&numero);
            if (numero > mayor)
            {
                mayor = numero;
            }
            
        }
        printf("el numero mayor es %d\n",mayor);
    }
    if (valor == 4)
    {
        printf("seleccionaste la opcion 4.Salir");
    }
return 0;
}