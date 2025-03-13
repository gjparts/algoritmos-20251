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
		//atributos
		string nombre;
		int edad;
		char genero;
		string dni;
		//constructores
		/*Un constructor es una funcion o metodo que asigna una direccion
		de memoria a un objeto de la clase.
		-> Siempre se llaman igual que la clase (C++, Java)
		-> Siempre van en el ambito publico (C++)
		-> No tienen tipo de dato de retorno (porque siempre develven memoria)
		-> C++ permite tener varios constructores por clase.
		-> Normalmente se usan para inicializar los atributos de la clase; pero
		   tambien se puede ejecutar otras tareas desde un constructor.*/
		Persona(){
			//constructor sin parametros: no tiene parametros en el parentesis
			//en esta caso vamos a poner valores Default o Predeterminados
			//de inicio para los atributos de esta clase
			this->nombre = "No tiene";
			this->edad = 0;
			this->genero = 'X';
			this->dni = "No definido";
		}
		Persona(string nombre, int edad){
			//constructor con dos parametros
			this->nombre = nombre;
			this->edad = edad;
			this->genero = 'X';
			this->dni = "No definido";
		}
		Persona(string nombre, int edad, char genero, string dni){
			//constructor con todos los parametros
			this->nombre = nombre;
			this->edad = edad;
			this->genero = genero;
			this->dni = dni;
		}
		//metodos
		void saludar(){
			cout << "Hola me llamo " << this->nombre << endl;
		}
		void imprimir(){
			cout << "****** Perfil ****** " << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Genero: " << this->getGeneroDescripcion() << endl;
			cout << "DNI: " << this->dni << endl;
		}
		bool esTerceraEdad(){
			//devuelve true si es de la tercera edad, sino devuelve false
			if( this->edad >= 60 )
				return true;
			else
				return false;
		}
		string getGeneroDescripcion(){
			if( this->genero == 'M' ) return "Masculino";
			if( this->genero == 'F' ) return "Femenino";
			if( this->genero == 'X' ) return "Otros";
			//si llego aqui no se cumplio ninguna de las condiciones anteriores
			return "No configurado en el programa";
		}
}; //este punto y coma es obligatorio

#endif






