#include <stdio.h>
#include <stdlib.h>

int Triangle(int a, int b, int c)
{
    a = a * a;
    b = b * b;
    c = c * c;
    if((a == b + c) || ( b == a + c) || (c == b + a))
    {
       return 1;
    }
    else
    {
      return 0;
    }

}

int main()
{
    int a,b,c;
    printf("Rentrer 3 chiffres \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(Triangle(a,b,c) == 0 )
    {
        printf("Le triangle n'est pas rectangle");
    }
    else if(Triangle(a,b,c) == 1)
    {
        printf("Le triangle est rectangle");
    }

    return 0;
}
