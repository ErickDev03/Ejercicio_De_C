#include <stdio.h>
/*
	3.2 Haga un programa que calcule el �rea de dos tri�ngulos e imprima el promedio de las �reas,
	    teniendo en cuenta que la f�rmula del �rea A=(b*H)/2
	
	[|�__�|] ======Erick Manuel Sosa <-__-> 1202690====== [|�__�|]
*/

main(){
	int i;
	float area, base, height, prom = 0;
	
	for(i = 1; i <= 2; i++){
		printf("\nEnter the base (base) of the triangle #%i: ", i);
		scanf("%f", &base);
	printf("Enter the height (Altura) of the triangle #%i: ", i);
		scanf("%f", &height);
		
		area = (base * height)/2;
			printf("\n\n\tCalculo del triangulo #%i", i);
		printf("\n The area of the triangle #%i is: %.2f\n", i, area);
		
		prom += area / 2;
	}
	
	printf("\n\n  The average (Promedio) areas is: %.2f%c", prom, 37);
}
