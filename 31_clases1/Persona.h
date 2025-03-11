/*clase Persona*/
//define permite crear una region de codigo que 
//tenga un identificador
#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>
using namespace std;

class Persona{
	private:
		//ambito privado (private scope)
		//atributos y metodos que no se pueden ver y escribir
		//desde afuera de la clase
	public:
		//ambito publico (public scope)
		//atributos y metodos que se pueden ver y escribir
		//desde afuera de la clase
		string nombre;
		int edad;
		char genero;
		string dni;
		
}; //este punto y coma es obligatorio

#endif
