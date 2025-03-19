#ifndef EMPLEADO_H
#define EMPLEADO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Empleado{
	private:
		//atributos
		int edad;
		float salario;
		char genero;
		char contrato;
	public:
		//atributos
		string nombre;
		//constructor
		Empleado(string nombre, int edad, float salario, char genero, char contrato){
			this->nombre = nombre;
			//aplicacion de reglas a nivel de constructor:
			this->setEdad(edad);
			this->setSalario(salario);
			this->setGenero(genero);
			this->setContrato(contrato);
		}
		//metodos
		void imprimir(){
			cout << "****** Perfil de Empleado ******" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Salario: " << this->salario << endl;
			cout << "Genero: " << this->getGeneroDescripcion() << endl;
			cout << "Tipo de Contrato: " << this->getContratoDescripcion() << endl;
		}
		//metodos get y set
		string getGeneroDescripcion(){
			if( this->genero == 'M' ) return "Masculino";
			if( this->genero == 'F' ) return "Femenino";
			if( this->genero == 'X' ) return "Otros";
			return "No configurado";
		}
		string getContratoDescripcion(){
			if( this->contrato == 'T' ) return "Temporal";
			if( this->contrato == 'P' ) return "Permanente";
			return "No configurado";
		}
		int getEdad(){
			return this->edad;
		}
		float getSalario(){
			return this->salario;
		}
		char getGenero(){
			return this->genero;
		}
		char getContrato(){
			return this->contrato;
		}
		void setEdad(int edad){
			if( edad >= 18 )
				this->edad = edad; //se acepta
			else
				throw invalid_argument("Edad debe de ser >= 18.");
		}
		void setSalario(float salario){
			if( salario >= 0 )
				this->salario = salario; //se acepta
			else
				throw invalid_argument("Salario debe ser >= 0.");
		}
		void setGenero(char genero){
			if( genero == 'M' || genero == 'F' || genero == 'X' )
				this->genero = genero; //se acepta
			else
				throw invalid_argument("Genero debe ser M, F, X");
		}
		void setContrato(char contrato){
			if( contrato == 'T' || contrato == 'P' )
				this->contrato = contrato; //se acepta
			else
				throw invalid_argument("Contrato debe ser T, P");
		}
};

#endif






