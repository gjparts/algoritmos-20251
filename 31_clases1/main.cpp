/*Recomendaciones cuando se trabaja con clases en C++
1) Hacer un folder el cual va a representar a nuestro proyecto
2) dentro de dicho folder van a crear un archivo que se
   llame main.cpp y dentro de el ponen su funcion main
3) para cada una de las clases que hagamos en el proyecto
   se hara un archivo separado con extension .h
   cada uno de estos archivos se le hara include desde
   el archivo main*/
#include<iostream>
#include "Persona.h"
using namespace std;

int main(){
	//instanciar un nuevo objeto de clase Persona
	//observe que per1 es una variable apuntada
	Persona *per1 = new Persona();
	
	
	return 123;
}
