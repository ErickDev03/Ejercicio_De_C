#include <stdio.h>
/*
	3.1 Realice un programa que genere la tabla de multiplicación del 2 y luego la imprima.
	
	[|°__°|] ======Erick Manuel Sosa <-__-> 1202690====== [|°__°|]
*/

main(){
	int x, y = 2, aux;
	printf(" Multiplication table of 2\n");
	for(x = 1; x <= 10; x++){ 
		aux = x * y;  
		printf("\n\t%i * %i = %i", y, x, aux);
	}
}
