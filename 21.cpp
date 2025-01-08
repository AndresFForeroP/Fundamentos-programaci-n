#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int generarcarta(int suma)
{
    int n = 2 + rand() %13;
    int x = 1 + rand() %4;
    sleep(1);
    if (n > 10)
    {
        if (n == 11)
        {
            n = 10;
            char n2[] = "J";
            if (x == 1)
            {
                char s[] = "t";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 2)
            {
                char s[] = "c";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 3)
            {
                char s[] = "d";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 4)
            {
                char s[] = "p";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
        }
        if (n == 12)
        {
            n = 10; 
            char n2[] = "Q";
            if (x == 1)
            {
                char s[] = "t";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 2)
            {
                char s[] = "c";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 3)
            {
                char s[] = "d";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 4)
            {
                char s[] = "p";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
        }
        if (n == 13)
        {
            n = 10; 
            char n2[] = "K";
            if (x == 1)
            {
                char s[] = "t";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 2)
            {
                char s[] = "c";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 3)
            {
                char s[] = "d";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 4)
            {
                char s[] = "p";
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
                char s[] = "t";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 2)
            {
                char s[] = "c";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 3)
            {
                char s[] = "d";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 4)
            {
                char s[] = "p";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
        }
        
    }
    else
    {
    if ( x == 1)
    {
        char s[] = "t";
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
        char s[] = "c";
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
        char s[] = "d";
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
        char s[] = "p";
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
    suma += n;
    return suma;
}

int main()
{
    float pvic = 0 ,vic = 0, part = 0;
    while (1)
 {
    int conteo = 0;
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
  printf("* * * * * * * * * * * * * * * * * * * * * * * * * *\n*                                                 *\n*    Has jugado %0.f partidas y has ganado %0.f         *\n*               Has ganado el %.1f%%               *\n*                GRACIAS POR JUGAR                *\n*  Para volver a jugar escribe cualquier letra    *\n*      si desea salir del juego escriba E         *\n*                                                 *\n* * * * * * * * * * * * * * * * * * * * * * * * * *\n",part,vic,pvic);
  scanf("%s",&f);
  if (f == 'e' || f == 'E')
  {
    printf("* * * * * * * * * * * * * *\n*                         *\n*   Saliste del juego     *\n*                         *\n* * * * * * * * * * * * * *\n");
  }
 }
}