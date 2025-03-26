#ifndef NODO_H
#define NODO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Nodo{
	private:
	public:
		//atributos
		string 	value;
		Nodo	*next;
		//constructor
		Nodo(string value){
			this->value = value;
			this->next = NULL;
		}
};

#endif






