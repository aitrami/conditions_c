#include <stdio.h>
#include <stdlib.h>
/*Ecrivez un programme pour v�rifier si le nombre donn�
est positif, n�gatif ou nul.Si le nombre est inf�rieur �
z�ro, alors le nombre est n�gatif et si le
nombre est sup�rieur � z�ro, alors lenombre est positif.
Si les deux conditions sont fausses,
le nombre est �gal � z�ro.*/

int main()
{   int a;
    printf("entrer un nombre:\n");
    scanf("%d",&a);

    if (a==0)
        printf("ce nombre est nul");
    else if (a<0)
        printf("ce nombre est negatif");

    else
        printf("ce nombre est positif");

    return 0;
}

    

