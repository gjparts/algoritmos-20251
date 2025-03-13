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
	//direccion de memoria de per1
	cout << per1 << endl;
	//informacion guardada en los atributos de per1
	cout << "informacion en per1: *************" << endl;
	cout << "nombre: " << per1->nombre << endl;
	cout << "edad: " << per1->edad << endl;
	cout << "genero: " << per1->genero << endl;
	cout << "dni: " << per1->dni << endl;
	
	//es posible cambiar los valores de los atributos publicos:
	per1->nombre = "Gerardo";
	per1->edad = 42;
	per1->genero = 'M';
	per1->dni = "1234123412345";
	
	//informacion actualizada en los atributos de per1
	cout << "informacion en per1: *************" << endl;
	cout << "nombre: " << per1->nombre << endl;
	cout << "edad: " << per1->edad << endl;
	cout << "genero: " << per1->genero << endl;
	cout << "dni: " << per1->dni << endl;
	
	//prueba de constructor con dos parametros
	Persona *per2 = new Persona("Josue",11);
	cout << "informacion en per2: *************" << endl;
	cout << "nombre: " << per2->nombre << endl;
	cout << "edad: " << per2->edad << endl;
	cout << "genero: " << per2->genero << endl;
	cout << "dni: " << per2->dni << endl;
	
	//prueba de constructor con cuatro parametros
	Persona *per3 = new Persona("Viena",16,'F',"0000111122222");
	cout << "informacion en per3: *************" << endl;
	cout << "nombre: " << per3->nombre << endl;
	cout << "edad: " << per3->edad << endl;
	cout << "genero: " << per3->genero << endl;
	cout << "dni: " << per3->dni << endl;
	
	//uso de los metodos
	per1->saludar();
	per1->imprimir();
	per2->saludar();
	per2->imprimir();
	per3->saludar();
	per3->imprimir();
	
	cout << "per1, es de la tercera edad? " << per1->esTerceraEdad() << endl;
	cout << "per2, es de la tercera edad? " << per2->esTerceraEdad() << endl;
	cout << "per3, es de la tercera edad? " << per3->esTerceraEdad() << endl;
	
	Persona *per4 = new Persona("Filomeno Colinas",71,'M',"00000000");
	cout << "per4, es de la tercera edad? " << per4->esTerceraEdad() << endl;
	
	return 123;
}







