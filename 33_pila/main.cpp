#include<iostream>
#include "Nodo.h"
#include "Pila.h"
using namespace std;

int main(){
	Pila *s1 = new Pila();
	
	//apilar
	s1->push("Caja de Acero");
	s1->push("Caja de Madera");
	s1->push("Caja de Carton");
	s1->push("Caja de Papel");
	s1->push("Boligrafo");
	s1->print();
	
	//desapilar
	s1->pop();
	s1->pop();
	s1->pop();
	s1->print();
	
	//desapilar tres Nodos
	//este Nodo existe:
	Nodo *n = s1->pop();
	if( n != NULL ) cout << "Nodo desapilado es " << n->value << endl;
	
	//este Nodo existe:
	n = s1->pop();
	if( n != NULL ) cout << "Nodo desapilado es " << n->value << endl;
	
	//este Nodo ya no existe (pop devuelve NULL) lo ignoramos:
	n = s1->pop();
	if( n != NULL ) cout << "Nodo desapilado es " << n->value << endl;
	
	s1->print();
	
	//mover un Nodo entre dos pilas:
	Pila *p1 = new Pila();
	Pila *p2 = new Pila();
	
	p1->push("Bloque de pasto");
	p1->push("Bloque de madera");
	p1->push("Bloque de piedra");
	p1->push("Bloque de hierro");
	cout << "Pila 1:"  << endl;
	p1->print();
	
	cout << "Pila 2:"  << endl;
	p2->print();
	
	//mover un Nodo desde p1 hacia p2:
	p2->push( p1->pop()->value );
	
	cout << "************************************************" << endl;
	cout << "Pila 1:"  << endl;
	p1->print();
	cout << "Pila 2:"  << endl;
	p2->print();
	
	return 678;
}





