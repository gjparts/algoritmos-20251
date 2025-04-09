#include<iostream>
#include<stdexcept>
#include "Nodo.h"
#include "Cola.h"

using namespace std;

int main(){
	Cola *c1 = new Cola();
	c1->enqueue("Pedro");
	c1->enqueue("Pablo");
	c1->enqueue("Raul");
	c1->enqueue("Rodolfo");
	c1->enqueue("Paco");
	c1->print();
	
	//extraer Nodos y no usarlos
	c1->dequeue();
	c1->print();
	c1->dequeue();
	c1->print();
	
	//extraer Nodos y usarlos
	Nodo *extraido = c1->dequeue();
	if( extraido != NULL )
		cout << "Valor del nodo extraido: " << extraido->value << endl;
	
	extraido = c1->dequeue();
	if( extraido != NULL )
		cout << "Valor del nodo extraido: " << extraido->value << endl;
	
	extraido = c1->dequeue();
	if( extraido != NULL )
		cout << "Valor del nodo extraido: " << extraido->value << endl;
	
	extraido = c1->dequeue();
	if( extraido != NULL )
		cout << "Valor del nodo extraido: " << extraido->value << endl;
	
	c1->print();
	
	
	return 8765;
}
