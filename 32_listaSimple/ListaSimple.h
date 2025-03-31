#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include<iostream>
#include<stdexcept>
#include "Nodo.h"
using namespace std;

class ListaSimple{
	private:
		//atributos
		Nodo	*first;
		Nodo	*last;
		int		length;
	public:
		ListaSimple(){
			this->first = NULL;
			this->last = NULL;
			this->length = 0; //no tiene Nodos aun
		}
		//metodos
		Nodo *getFirst(){
			return this->first;
		}
		Nodo *getLast(){
			return this->last;
		}
		int getLength(){
			return this->length;
		}
		//metodo para agregar un nuevo Nodo al final de la lista
		void push(string value){
			//1) crear un nuevo Nodo llamado tmp cuyo valor sea value
			Nodo *tmp = new Nodo(value);
			/*2) Si length es Cero entonces:
				a) first y last apuntaran al Nodo tmp
			sino
				a) el next del Nodo last apuntara al Nodo tmp
				b) el Nodo last apuntara a tmp*/
			if( this->length == 0 ){
				this->first = tmp;
				this->last = tmp;
			}
			else{
				this->last->next = tmp;
				this->last = tmp;
			}
			//3) sumar 1 a length
			this->length++;
		}
		//metodo para imprimir el contenido de la lista en pantalla
		void print(){
			//Algoritmo de recorrido
			//1) Declarar variable tmp de tipo Nodo y apuntarla a first
			Nodo *tmp = this->first;
			/*2) Mientras el Nodo tmp sea distinto de NULL entonces:
					a) imprimir el value de tmp
					b) apuntar tmp al next de tmp (pasar al siguiente Nodo
				Sino:
					a) terminar el recorrido*/
			while( tmp != NULL ){
				cout << tmp->value << "->";
				tmp = tmp->next; //pasar al siguiente Nodo
			}
			//se termino el recorrido
			cout << "NULL" << endl; //imprimo el letrero NULL
		}
		
};

#endif





