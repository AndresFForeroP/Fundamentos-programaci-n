#include<stdio.h>
int main()
{
    int x, y, z;
    printf(" ingrese 3 numeros enteros que desea ordenar de maoyor a menor\n");
    printf("ingrese el primer numero\n");
    scanf("%d",&x);
    printf("ingrese el segundo numero\n");
    scanf("%d",&y);
    printf("ingrese el tercer numero\n");
    scanf("%d",&z);

    if (x > y && x > z)
        {
            if (y > z)
            {
                printf("%d es mayor que %d y %d es mayor que %d\n",x,y,y,z);
            }
            if (z > y)
            {
                printf("%d es mayor que %d y %d es mayor que %d\n",x,z,z,y);
            }
        }
    if (y > x && y > z)
        {
            if (x > z)
            {
                printf("%d es mayor que %d y %d es mayor que %d\n",y,x,x,z);
            }
            if (z > x)
            {
                printf("%d es mayor que %d y %d es mayor que %d\n",y,z,z,x);
            }
        }   
    if (z > x && z > y)
        {
            if (x > y)
            {
                printf("%d es mayor que %d y %d es mayor que %d\n",z,x,x,y);
            }
            if (y > x)
            {
                printf("%d es mayor que %d y %d es mayor que %d\n",z,y,y,x);
            }
            
        }
    
    
    return 0;
}