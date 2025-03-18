#ifndef CARRO_H
#define CARRO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Carro{
	private:
		//atributos privados: no se pueden leer/escribir
		//desde afuera de la clase
		int anio;
	public:
		string marca;
		string modelo;
		string color;
		//constructor
		Carro(string marca, string modelo, string color, int anio){
			this->marca = marca;
			this->modelo = modelo;
			this->color = color;
			//en el constructor tambien debe aplicarse la regla por
			//medio del metodo set para el atributo privado:
			this->setAnio(anio);
		}
		//metodos
		void imprimir(){
			cout << "**** Ficha de Vehiculo ****" << endl;
			cout << "Marca: " << this->marca << endl;
			cout << "Modelo: " << this->modelo << endl;
			cout << "Color: " << this->color << endl;
			cout << "Anio: " << this->anio << endl;
		}
		//metodo get: se usan para poder leer el valor
		//almacenado en un atributo private desde un ambito externo
		//normalmente los metodos get son del mismo tipo de dato
		//del atributo.
		int getAnio(){
			return this->anio;
		}
		/*metodo set: permite escribir el valor de un atributo
		private desde un ambito externo.
		-> los metodos set, normalmente no retornan nada (void);
		-> los metodos set, deben recibir un parametro que debe de ser
		   del mismo tipo de dato del atributo a escribir;
		-> los metodos set normalmente se utilizan para obligar
		   a cumplir las reglas de entrada del atributo a escribir.
		-> cuando desde un metodo set aplicamos reglas se recomienda
		   usar guard clauses para validar los datos. (stdexcept)*/
		void setAnio( int anio ){
			//regla: anio debe de ser un numero >= 2000
			if( anio >= 2000 )
				this->anio = anio; //se acepta y se guarda en el atributo
			else
				throw invalid_argument("anio debe de ser un numero >= 2000");
		}
};

#endif





