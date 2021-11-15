#include <stdio.h>
#include <stdlib.h>

int main()
{ float moyn;

    printf("entrer la moyenne:\n");
    scanf("%f",&moyn);

    if(moyn<10)
        printf("redouble\n");

        else if(moyn<12)
        printf("passable");

    else if(moyn<14)
        printf("assez bien");

    else if (moyn<16)
        printf("bien");

    else  if (moyn<20)
        printf("tres bien");
    
	
	
	
	return 0;
}
