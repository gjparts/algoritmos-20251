#ifndef CARRO_H
#define CARRO_H

#include<iostream>
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
			this->anio = anio;
		}
		//metodos
		void imprimir(){
			cout << "**** Ficha de Vehiculo ****" << endl;
			cout << "Marca: " << this->marca << endl;
			cout << "Modelo: " << this->modelo << endl;
			cout << "Color: " << this->color << endl;
			cout << "Anio: " << this->anio << endl;
		}
};

#endif





