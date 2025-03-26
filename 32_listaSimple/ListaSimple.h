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
};

#endif





