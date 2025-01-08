#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generarcarta(int suma)
{
    int n = 2 + rand() %13;
    int x = 1 + rand() %4;
    if (n > 10)
    {
        if (n == 11)
        {
            n = 10;
            char n2[] = "J";
            if (x == 1)
            {
                char s[] = "♣";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 2)
            {
                char s[] = "♥";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 3)
            {
                char s[] = "♦";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 4)
            {
                char s[] = "♠";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
        }
        if (n == 12)
        {
            n = 10; 
            char n2[] = "Q";
            if (x == 1)
            {
                char s[] = "♣";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 2)
            {
                char s[] = "♥";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 3)
            {
                char s[] = "♦";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 4)
            {
                char s[] = "♠";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
        }
        if (n == 13)
        {
            n = 10; 
            char n2[] = "K";
            if (x == 1)
            {
                char s[] = "♣";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 2)
            {
                char s[] = "♥";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 3)
            {
                char s[] = "♦";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 4)
            {
                char s[] = "♠";
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
                char s[] = "♣";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 2)
            {
                char s[] = "♥";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 3)
            {
                char s[] = "♦";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
            if (x == 4)
            {
                char s[] = "♠";
                printf(" --------------- \n | %s           | \n |             | \n |             | \n |      %s      | \n |             | \n |             | \n |           %s | \n ---------------\n",s,n2,s);
            }
        }
        
    }
    else
    {
    if ( x == 1)
    {
        char s[] = "♣";
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
        char s[] = "♥";
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
        char s[] = "♦";
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
        char s[] = "♥";
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
    printf("********************************************************************************************************************************************************\n*                                                                                                                                                      *\n*             * * *    *   * * *   *      *   *     *    * * *   *      *   *  * *     ****                     *                                      *\n*             *   *    *   *       * *    *   *     *    *       * *    *   *  *   *  *     *                 *   *                                    *\n*             * *      *   * * *   *  *   *   *     *    * * *   *  *   *   *  *   *  *     *                *  *  *                                   *\n*             *   *    *   *       *    * *    *   *     *       *    * *   *  *   *  *     *                *     *                                   *\n*             * * *    *   * * *   *      *      *       * * *   *      *   *  * *      ****                 *     *                                   *\n*                                                                                                                                                      *\n*                                                                                                                                                      *\n*                                                          *  *  *          * *                                                                        *\n*                                                        *        *       *   *                                                                        *\n*                                                                *      *     *                                                                        *\n*                                                               *             *                                                                        *\n*                                                             *               *                                                                        *\n*                                                           *                 *                                                                        *\n*                                                         *                   *                                                                        *\n*                                                        * * * * *            *                                                                        *\n*                                                                                                                                                      *\n*                                                                                                                                                      *\n*                                            Escrbia cualquier letra para jugar o E para salir                                                         *\n*                                                                                                                                                      *\n********************************************************************************************************************************************************\n");
    char x;
    scanf("%c",&x);
    if (x == 'E' || x == 'e')
    {
        printf("* * * * * * * * * * * * * *\n*                         *\n*   Saliste del juego     *\n*                         *\n* * * * * * * * * * * * * *\n");
        exit(-1);
    }
    srand(time(0));
    int inicio = 0;
    int suma = generarcarta(inicio);
    suma = generarcarta(suma);
    printf("\n");
    printf("* * * * * * * * * * * * * * * * * * *\n*                                   *\n*   La suma de tus cartas es %d     *\n*                                   *\n* * * * * * * * * * * * * * * * * * *\n",suma);
    while (suma <= 21)
    {
        printf("Escriba C para sacar otra carta y P para plantarse\n ");
        char letra;
        scanf("%c", &letra);
        if (letra == 'c' || letra == 'C')
        {
            suma = generarcarta(suma);
            printf("* * * * * * * * * * * * * * * * * * *\n*                                   *\n*   La suma de tus cartas es %d     *\n*                                   *\n* * * * * * * * * * * * * * * * * * *\n",suma);
        }
        if (letra == 'P' || letra == 'p')
        {
            printf("* * * * * * * * * * * * * * * * * * *\n*                                   *\n*    Te plantaste con %d puntos     *\n*                                   *\n* * * * * * * * * * * * * * * * * * *\n",suma);
            printf("las cartas de tu oponente son\n");
            int sumarv = generarcarta(inicio);
            while (sumarv < 17 )
            {
                sumarv = generarcarta(sumarv);
            } 
            printf("* * * * * * * * * * * * * * * * * * *\n*                                   *\n*   La suma de sus cartas es %d     *\n*                                   *\n* * * * * * * * * * * * * * * * * * *\n",sumarv);
            if (sumarv > 21)
            {
                printf("* * * * * * * * * * * * * *\n*                         *\n*       Ganaste :D        *\n*                         *\n* * * * * * * * * * * * * *\n");
                break;
            }
            
            if (suma >= sumarv && suma < 21)
            {
                if (suma == sumarv)
                {
                    printf("* * * * * * * * * * * * * * * * * * *\n*                                   *\n*    Empataste con %d puntos :O     *\n*                                   *\n* * * * * * * * * * * * * * * * * * *\n",suma);
                    break;
                }
                
                printf("* * * * * * * * * * * * * *\n*                         *\n*       Ganaste :D        *\n*                         *\n* * * * * * * * * * * * * *\n");
                break;
            }
            else
            {
                printf("* * * * * * * * * * * * * *\n*                         *\n*       Perdiste :C       *\n*                         *\n* * * * * * * * * * * * * *\n");
                break;
            }
        }
    }
    if (suma > 21)
    {
        printf("* * * * * * * * * * * * * *\n*                         *\n*       Perdiste :C       *\n*                         *\n* * * * * * * * * * * * * *\n");
    }
}
    
