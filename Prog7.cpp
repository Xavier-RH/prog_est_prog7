/* Autor: Xavier Romero Hernández, Realizado: 09/02/2022 
	Programa que pida los datos de una corona circular y calcule su area.
	*/

#include <stdio.h>
#include <math.h>

int main (){
	float area, rmayor, rmenor;
	
	printf("Calcular el area de una corona circular\n");
	printf("introduce el radio mayor: ");
	scanf("%f",&rmayor);
	printf("introduce el radio menor: ");
	scanf("%f",&rmenor);
	
	area=M_PI*(pow(rmayor,2)-pow(rmenor,2));
	
	printf("\nEl area de la corona circular es de %.2f cm2",area);
	
	return 0;
}
