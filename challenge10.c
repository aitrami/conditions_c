#include <stdio.h>
#include <stdlib.h>

int main()
{
  float temp;

    printf("entrer la temperature de l eau:\n");
    scanf("%f",&temp);

    if(temp<0)
        printf("glace\n");

        else if(temp>0 && temp<100)
        printf("eau");

    else if(temp>100)
        printf("VAPPEURE");

    return 0;
}


