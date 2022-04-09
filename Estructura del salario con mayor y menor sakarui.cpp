#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

struct Empleados{
	char nombre [20];
	
	int salario;
	
}Empleados[100];

int main(){
	int empleados;
	int mayor,menor;
	int sp, spt;
	mayor=0;
	menor= 100;
	
	printf ("Ingrese el numero de emplados: ");
	scanf ("%d", &empleados);
	
	int i;
	for(i=0;i<empleados;i++){
		printf ("Ingrese el nombre: ");
		scanf ("%s",&Empleados[i].nombre);
		
		printf ("Ingrese el salario: ");
		scanf ("%d",&Empleados[i].salario);
		
		if (Empleados[i].salario>mayor){
			mayor=Empleados[i].salario;
			spt=i;
		}
		if (Empleados[i].salario< menor){
			menor= Empleados[i].salario;
			sp=i;
		}	
	}
		printf ("Datos del empleado con menor salario ");
		printf ("\nNombre: %s",Empleados[spt].nombre);
		printf (" \nSalario: %f",Empleados[spt].salario);
		
		printf ("\nDatos del empleado con mayor salario");
		printf ("\nNombre: %s",&Empleados[sp].nombre);
		printf ("\nSalario: %f",&Empleados[sp].salario);

}
