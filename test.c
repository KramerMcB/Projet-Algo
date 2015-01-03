#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j1,j2,i;
    i = 0;
    j1 = 0;
    j2 = 1;

    while( j1 != j2 ){

        if( j1 == 0 ){
            printf("Joueur 1 : Rentrer un nombre\n");
            scanf("%d",&j1);
            system("clear");
            printf("Joueur 2 : A vous de jouer! \n");
        }

        printf("Rentrer un nombre : \n");
        scanf("%d",&j2);
        if( j1 > j2 ){
            system("clear");
            printf("Le nombre du joueur 1 est plus grand\n");
        }else if( j1 < j2 ){
            system("clear");
            printf("Le nombre du joueur 1 est plus petit\n");
        }
        i++;
    }
    printf("Vous avez trouvé le nombre du joueur 1, qui est : %d\nPar contre, il t'a fallu %d fois pour trouver le bon numéro. Tu peux faire mieux je suis sur!!! ;-)", j1,i);
    return 0;
}
