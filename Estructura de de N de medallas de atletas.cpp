#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct atletas{
	char nombre;
	char pais;
	int N_medallas;
	
}atletas[30];

int main (){
	
	int Atletas;
	
	
	printf ("Ingrese el numero de atletas: ");
	scanf ("%d",&Atletas);
	
	int i,T,t;
	int mayor, menor;
	for(i=0;i<Atletas;i++){
		printf ("Ingrese el nombre del atletas: ");
		scanf ("%s", &atletas[i].nombre);
		
		printf ("Ingrese el pais procedente del atletas: ");
		scanf ("%s",&atletas[i].pais);
		
		printf ("Ingrese el numero de medallas obtenidas por el atletas: ");
		scanf ("%d",&atletas[i].N_medallas);
		
			if (atletas[i].N_medallas>mayor){
			mayor=atletas[i].N_medallas;
			T=i;
		}
		if (atletas[i].N_medallas< menor){
			menor= atletas[i].N_medallas;
			t=i;
		}		
	}
	printf (" Datos del atletas con mayor numero de medallas\n");
	printf("\nNombre: %s",&atletas[T].nombre);
	printf ("\nPais: %s", &atletas[T].pais);
	
	printf ("\n Datos del atletas con menor numero de medallas");
	printf("\nNombre: %s",&atletas[t].nombre);
	printf ("\nPais: %s", &atletas[t].pais);

	return 0;
}
