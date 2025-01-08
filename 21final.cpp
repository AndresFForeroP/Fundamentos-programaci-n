#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int generarcarta(int suma)
{
    //esta funcion gener las cartas, genera aleatoriamente dos numeros el primero numero es generado entre 2 y 14 y le da el valor a la carta
    //si el numero es mayor de 10 cambia en la carta a j,k,q,a respectivamente y se le asisna un valor numerico para hacer la suma de los puntos
    //el segundo numero es entre 1 y 4, segun el numero que salga se asigna a una carta ♣,♠,♥ o ♦
    int n = 2 + rand() %13;
    int x = 1 + rand() %4;
    //hice uso de la libreria unistd.h para la funcion sleep, esta funcion la voy a usar en todo el codigo para que el programa espere un segundo
    sleep(1);
    if (n > 10)
    {
        if (n == 11)
        {
            n = 10;
            char n2[] = "J";
            if (x == 1)
            {
                char s[] = "\5";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 2)
            {
                char s[] = "\3";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 3)
            {
                char s[] = "\4";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 4)
            {
                char s[] = "\6";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
        }
        if (n == 12)
        {
            n = 10; 
            char n2[] = "Q";
            if (x == 1)
            {
                char s[] = "\5";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 2)
            {
                char s[] = "\3";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 3)
            {
                char s[] = "\4";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 4)
            {
                char s[] = "\6";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
        }
        if (n == 13)
        {
            n = 10; 
            char n2[] = "K";
            if (x == 1)
            {
                char s[] = "\5";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 2)
            {
                char s[] = "\3";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 3)
            {
                char s[] = "\4";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 4)
            {
                char s[] = "\6";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
        }
        if (n == 14)
        {
            char n2[] = "A";
            if (11 + suma > 21)
            {
                n = 1;
            }
            else
            {
                n = 11;
            }
            if (x == 1)
            {
                char s[] = "\5";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 2)
            {
                char s[] = "\3";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 3)
            {
                char s[] = "\4";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 4)
            {
                char s[] = "\6";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
        }
        
    }
    else
    {
    if ( x == 1)
    {
        char s[] = "\5";
        if (n == 10)
        {
            printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %d     | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n,s);
        }
        else
        {
            printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %d      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n,s);
        }
    }
    if ( x == 2)
    {
        char s[] = "\3";
        if (n == 10)
        {
            printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %d     | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n,s);
        }
        else
        {
            printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %d      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n,s);
        }
    }
    if ( x == 3)
    {
        char s[] = "\4";
        if (n == 10)
        {
            printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %d     | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n,s);
        }
        else
        {
            printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %d      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n,s);
        }
    }
    if ( x == 4)
    {
        char s[] = "\6";
        if (n == 10)
        {
            printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %d     | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n,s);
        }
        else
        {
            printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %d      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n,s);
        }
    }
    }
    //esta funcion ademas de imprimir la carta tambien hace la suma de los puntos, cada vez que se genera una carta suma los puntos acumulados con los nuevos
    suma += n;
    return suma;
}

int main()
{
    float pvic = 0 ,vic = 0, part = 0;
    //while para que el programa se repita hasta que el usuario salga del programa
    while (1)
 {
    int conteo = 0;
    //cree esta variable part para que cuente cuantas partidas lleva el usuario y que si es la primera que juega salga la pantalla de inicio del juego
    if (part == 0)
    {
        printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n*                                                                                                                   *\n*      * * *    *   * * *   *      *   *     *    * * *   *      *   *  * *     * * *                    *          *\n*      *   *    *   *       * *    *   *     *    *       * *    *   *  *   *  *     *                 *   *        *\n*      * *      *   * * *   *  *   *   *     *    * * *   *  *   *   *  *   *  *     *                *  *  *       *\n*      *   *    *   *       *    * *    *   *     *       *    * *   *  *   *  *     *                *     *       *\n*      * * *    *   * * *   *      *      *       * * *   *      *   *  * *     * * *                 *     *       *\n*                                                                                                                   *\n*                                                                                                                   *\n*                                            *  *  *          * *                                                   *\n*                                          *        *       *   *                                                   *\n*                                                  *      *     *                                                   *\n*                                                 *             *                                                   *\n*                                               *               *                                                   *\n*                                             *                 *                                                   *\n*                                           *                   *                                                   *\n*                                          * * * * *            *                                                   *\n*                                                                                                                   *\n*                                                                                                                   *\n*                  Escribia cualquier letra para jugar, T para el tutorial o E para salir                           *\n*                                                                                                                   *\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    }   
    char x;
    scanf("%c",&x);
    if (x == 'E' || x == 'e')
    {
        printf("* * * * * * * * * * * * * *\n*                         *\n*   Saliste del juego     *\n*                         *\n* * * * * * * * * * * * * *\n");
        exit(-1);
    }
    //cree un tutorial con las reglas del juego
    if (x == 'T' || x == 't')
    {
        char s;
        printf("TUTORIAL: El objetivo del juego es ganarle al dealer, el que este mas cerca de llegar a 21 o el que saque 21 gana\nEl juego te entregara dos cartas y te dira cuanto suman, si deseas puedes pedir otra carta o plantarte con tus cartas\nPuedes pedir todas las cartas que desees con la condicion que no pases los 21 puntos o perderas\nCuando desees plantarte se mostraran las cartas del dealer y se dara un ganador\nVALORES DE LAS CARTAS =          J = 10 Q = 10 K = 10 A = 11 o 1\nSi sacas un A se te suman 11 puntos pero si con esos 11 puntos adiciones te pasas de los 21 A pasara a valer 1\n\nEscribe cualquier letra para jugar o escribe E para salir\n");
        scanf(" %c",&s);
        if (s == 'E' || s == 'e')
        {
            printf("* * * * * * * * * * * * * *\n*                         *\n*   Saliste del juego     *\n*                         *\n* * * * * * * * * * * * * *\n");
            exit(-1);
        }
    }
    
    srand(time(0));
    int inicio = 0;
    //aca se generan las dos primeras cartas y se usa la variable suma para acumular los puntos 
    int suma = generarcarta(inicio);
    suma = generarcarta(suma);
    printf("\n");
    sleep(1);
    if (suma < 10)
    {
        printf("* * * * * * * * * * * * * * * * * * *\n*                                   *\n*   La suma de tus cartas es %d      *\n*                                   *\n* * * * * * * * * * * * * * * * * * *\n",suma);
    }
    else
    {
        printf("* * * * * * * * * * * * * * * * * * *\n*                                   *\n*   La suma de tus cartas es %d     *\n*                                   *\n* * * * * * * * * * * * * * * * * * *\n",suma);
    } 
    //aca un bucle de while para que puedas pedir cartas mientras no te pases de 21 puntos
    while (suma <= 21 && conteo == 0)
    {
        sleep(1);
        char letra;
        conteo = 0;
        printf("Escriba C para sacar otra carta o P para plantarse ");
        scanf(" %c", &letra);
        printf("\n");
        if (letra == 'c' || letra == 'C')
        {
            suma = generarcarta(suma);
            printf("* * * * * * * * * * * * * * * * * * *\n*                                   *\n*   La suma de tus cartas es %d     *\n*                                   *\n* * * * * * * * * * * * * * * * * * *\n",suma);
            printf("\n");
        }
        if (letra == 'P' || letra == 'p')
        {
            //cuando el usuario se planta se generan las cartas del dealer mientras la suma de sus cartas sea menor que 17
            printf("* * * * * * * * * * * * * * * * * * *\n*                                   *\n*    Te plantaste con %d puntos     *\n*                                   *\n* * * * * * * * * * * * * * * * * * *\n",suma);
            printf("\n");
            printf("las cartas de tu oponente son\n");
            printf("\n");
            int sumarv = generarcarta(inicio);
            printf("\n");
            while (sumarv < 17 )
            {
                sumarv = generarcarta(sumarv);
                printf("\n");
            }
            sleep(1); 
            printf("* * * * * * * * * * * * * * * * * * *\n*                                   *\n*   La suma de sus cartas es %d     *\n*                                   *\n* * * * * * * * * * * * * * * * * * *\n",sumarv);
            sleep(1);
            //aca se imprime la suma de los puntos de tu rival y se da un ganador
            //en las condiciones que el usuario gana la varianle vic se le agrega uno 
            printf("\n");
            if (sumarv > 21 && conteo ==0)
            {
                printf("* * * * * * * * * * * * * *\n*                         *\n*       Ganaste :D        *\n*                         *\n* * * * * * * * * * * * * *\n");
                conteo = 1;
                vic += 1;
            }
            
            if (suma >= sumarv && suma <= 21 && conteo ==0)
            {
                if (suma == sumarv)
                {
                    printf("* * * * * * * * * * * * * * * * * * *\n*                                   *\n*    Empataste con %d puntos :O     *\n*                                   *\n* * * * * * * * * * * * * * * * * * *\n",suma);
                    conteo = 1;
                }
                if (suma > sumarv)
                {
                    printf("* * * * * * * * * * * * * *\n*                         *\n*       Ganaste :D        *\n*                         *\n* * * * * * * * * * * * * *\n");
                    conteo = 1;
                    vic += 1;
                }
            }
            if (conteo == 0)
            {
                printf("* * * * * * * * * * * * * *\n*                         *\n*       Perdiste :C       *\n*                         *\n* * * * * * * * * * * * * *\n");
                conteo = 1;
            }
        }
    }
    if (suma > 21 && conteo ==0)
    {
        printf("* * * * * * * * * * * * * *\n*                         *\n*       Perdiste :C       *\n*                         *\n* * * * * * * * * * * * * *\n");
    }
  printf("\n");
  char f;
  part += 1;
  pvic = (vic / part) * 100;
  sleep(1);
  //cuando acaba cada partida se muestra en pantalla cuantas partidas llevas y cuantas ganadas ademas del porcentaje de victorias
  printf("* * * * * * * * * * * * * * * * * * * * * * * * * *\n*                                                 *\n*    Has jugado %0.f partidas y has ganado %0.f         *\n*               Has ganado el %.1f%%               *\n*                GRACIAS POR JUGAR                *\n*  Para volver a jugar escribe cualquier letra    *\n*      si desea salir del juego escriba E         *\n*                                                 *\n* * * * * * * * * * * * * * * * * * * * * * * * * *\n",part,vic,pvic);
  scanf("%s",&f);
  if (f == 'e' || f == 'E')
  {
    printf("* * * * * * * * * * * * * *\n*                         *\n*   Saliste del juego     *\n*                         *\n* * * * * * * * * * * * * *\n");
  }
 }
}