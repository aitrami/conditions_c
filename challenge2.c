#include <stdio.h>
#include <stdlib.h>

int main()
{ /* Challenge 2 : Affichage Temp�rature
   Ecrivez un programme qui demande la temp�rature en Fahrenheit et la transforme en degr� Celsius et affiche la sensation ressentie (tr�s froid, froid, chaud, tr�s chaud)
   La formule :  C = (F-32)/1.8

   float F,C;
 
 printf("entrer la temperature en F\n");
 scanf("%f",&F);
 
 C = (F-32)/1.8; 
 
 if (C<10)
    printf("la temperature en celcius %f est tres froide",C);
 
 else if (C<20)
    printf("la temperature en celcius %f est froide",C);
 
 else if (C<40)
    printf("la temperature en celcius %f est chaude",C);
    else
        printf("la temperature en celcius %f est tres chaude",C);
    
	
	return 0;
}
