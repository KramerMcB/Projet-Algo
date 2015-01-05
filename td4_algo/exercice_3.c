#include <stdio.h>
#include <stdlib.h>

int minimum(int a, int b)
{
    if( a > b )
    {
        return b;
    }else if( a < b)
    {
        return a;
    }
    return 0;
}


int main()
{
    int a,b;
    printf("Rentrer 2 chiffres :");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Le plus petit chiffre est : %d ",minimum( a, b));

}
