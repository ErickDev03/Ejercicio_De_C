/*
	2.3 - Realice un programa que lea dos variables e intercambie los valores entre ellas (Utilice m�ximo tres variables en el intercambio).
	[|�__�|] ======Erick Manuel Sosa <-__-> 1202690====== [|�__�|]
*/

#include <stdio.h>

main(){
	int varA, varB, aux; 
		printf("Enter to value a: ");
			scanf("%i", &varA);
		printf("Enter to value b: ");
			scanf("%i", &varB);
		
		printf("\n\tBefore\n\n");
		printf("\tA: %i B: %i", varA, varB);
		
		aux = varB;
		varB = varA;
		varA = aux;
		
		printf("\n\n\tAfter\n\n");
		printf("\tA: %i B: %i", varA, varB);
		
}
