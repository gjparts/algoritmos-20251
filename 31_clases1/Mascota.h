#ifndef MASCOTA_H
#define MASCOTA_H

#include<iostream>
using namespace std;

class Mascota{
	private:
	public:
		//atributos
		string nombre;
		string especie;
		int edad;
		char genero;
		bool pedigree;
		//constructores
		Mascota(){
			this->nombre = "no tiene";
			this->especie = "no definida";
			this->edad = 0;
			this->genero = 'X';
			this->pedigree = false;
		}
		Mascota(string nombre, string especie, int edad, char genero, bool pedigree){
			this->nombre = nombre;
			this->especie = especie;
			this->edad = edad;
			this->genero = genero;
			this->pedigree = pedigree;
		}
		Mascota(string nombre, string especie, int edad){
			this->nombre = nombre;
			this->especie = especie;
			this->edad = edad;
			this->genero = 'X';
			this->pedigree = false;
		}
		//metodos
		string getGeneroDescripcion(){
			if( this->genero == 'M' ) return "Macho";
			if( this->genero == 'H' ) return "Hembra";
			if( this->genero == 'X' ) return "No determinado";
		}
		void imprimir(){
			cout << "***** Perfil de la Mascota *****" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Especie: " << this->especie << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Genero: " << this->getGeneroDescripcion() << endl;
			cout << "Pedigree: " << ( this->pedigree ? "Si" : "No" ) << endl;
		}
};

#endif







