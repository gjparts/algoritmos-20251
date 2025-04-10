#include<iostream>
#include "Nodo.h"
#include "ListaSimple.h"
using namespace std;

int main(){
	//crear un nuevo objeto de clase ListaSimple
	ListaSimple *lista1 = new ListaSimple();
	//prueba de metodos
	lista1->push("5");
	lista1->push("7");
	lista1->push("1");
	lista1->push("40");
	lista1->push("12");
	//longitud de la lista
	cout << "Nodos en lista1: " << lista1->getLength() << endl;
	//valores del primer y ultimo Nodo
	cout << "Valor del primer Nodo en lista1: " << lista1->getFirst()->value << endl;
	cout << "Valor del ultimo Nodo en lista1: " << lista1->getLast()->value << endl;
	
	lista1->print();
	
	//pruebas del metodo get
	cout << "Valor del Nodo en la posicion 2: " << lista1->get(2)->value << endl;
	cout << "Valor del Nodo en la posicion 1: " << lista1->get(1)->value << endl;
	//cout << "Valor del Nodo en la posicion -1: " << lista1->get(-1)->value << endl;
	//cout << "Valor del Nodo en la posicion 50: " << lista1->get(50)->value << endl;
	
	//pruebas del metodo set
	lista1->set(2,"mandarina");
	lista1->set(4,"toronja");
	//lista1->set(-9,"777");
	lista1->print();
	
	//prueba del metodo pop
	lista1->pop(0);
	lista1->print();
	
	lista1->pop(2);
	lista1->print();
	
	lista1->pop(2);
	lista1->print();
	
	cout << "Primero: " << lista1->getFirst()->value << endl;
	cout << "Ultimo: " << lista1->getLast()->value << endl;
	
	//agregar mas Nodos
	lista1->push("rojo");
	lista1->push("amarillo");
	lista1->push("Verde");
	lista1->push("Azul");
	lista1->push("naranja");
	lista1->push("saturno");
	lista1->push("tierra");
	lista1->print();
	
	cout << "saturno esta en la posicion: " << lista1->find("saturno") << endl;
	cout << "verde esta en la posicion: " << lista1->find("verde") << endl;
	cout << "Verde esta en la posicion: " << lista1->find("Verde") << endl;
	cout << "rojo esta en la posicion: " << lista1->find("rojo") << endl;
	cout << "7 esta en la posicion: " << lista1->find("7") << endl;
	
	return 777;
}







