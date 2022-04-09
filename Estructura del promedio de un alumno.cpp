#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

struct alumnos{
	char Nombre[20];
	int Edad;
	int Promedio;
}alumnos[3];

 int main() {
	
	for(int i=0;i<3;i++){
	
	printf ("Nombre del alumno:\n ");
	scanf("%s",&alumnos[i].Nombre);
	
	printf ("Edad del alumno:\n ");
	scanf ("%d",&alumnos[i].Edad);
	
	printf (" Promedio del alumno:\n ");
	scanf ("%d",&alumnos[i].Promedio);
}
  int P;
  int Pt;
  P=alumnos[0].Promedio;
  Pt=0;
  for (int i=1;i<3;i++){
  if (alumnos[i].Promedio>P){
  	P=alumnos[i].Promedio;
  	Pt=i;
  }
  }
  printf ("Nombre: %s",alumnos[Pt].Nombre);
  printf ("Edad: %d",alumnos[Pt].Edad);
  printf ("Promedio %d",alumnos[Pt].Promedio);
  
  
return 0;
}

