#include <stdio.h>
#define MAX 10

/*
	  7.1-REALICE UN PROGRAMA QUE UTILIZANDO UNA FUNCI�N CALCULE LA POBLACI�N
 	  ESTUDIANTIL QUE UTESA TENDR� DENTRO DE 10 A�OS,SI LA POBLACI�N AUMENTA UN
      3% CADA A�O, DEBE LEER LA POBLACI�N ACTUAL.
      
      [|�__�|] ======Erick Manuel Sosa <-__-> 1202690====== [|�__�|]
*/

float calTotal(float p);

main(){
	float cantActPob = 100;
	printf(" LA POBLACION ESTUDIANTIL SERA DE\n\t    %.2f", calTotal(cantActPob));
}


float calTotal(float p){
	float aux = p;
	int i;
	
		for(i = 1; i <= MAX; i++){
			aux *= 1.03;
		}
		return aux;
}


