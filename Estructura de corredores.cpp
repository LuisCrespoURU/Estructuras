#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

struct corredor {
	char nombre [20];
	int edad;
	char sexo [10];
	char club [10];
	
}corredor[3];

int main (){
	
	int i, Juvenil, Senior, Veterano, categoria;
	 	
	printf ("\nIngrese su nombre: ");
    scanf ("%s",&corredor[i].nombre);
 
    printf ("\n Ingrese su edad: ");
    scanf ("%d", &corredor[i].edad);
    
    printf ("\nIngrese su genero: ");
    scanf ("%s",&corredor[i].sexo);
    
    printf ("\nIngrese su club: ");
    scanf ("%s",corredor[i].club);
    
    if (corredor[i].edad <=18){
     categoria = Juvenil;
	}
	else if (corredor[i].edad <=40){
	categoria = Senior;
	}
    else if (corredor[i].edad>40){
     	categoria = Veterano;
		 }

    printf ("Datos: \n");
    printf ("\nNombre: %s",corredor[i].nombre);
    printf ("\nEdad: %d", corredor[i].edad);
    printf ("\nSexo: %s", corredor[i].sexo);
    printf ("\nClub: %s", corredor[i].club);
    printf ("\nCategoria: %s", categoria);
    
return 0;
}


