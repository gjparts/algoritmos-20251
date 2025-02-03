#include<iostream>
using namespace std;

int main(){
	//buscar un string dentro de otro string
	string str = "El veloz murcielago hindu comia feliz, comia kiwi y comia melon.";
	cout << str << endl;
	
	string buscar;
	cout << "Digite el texto que desea buscar en el texto anterior: ";
	getline(cin,buscar);

	int posicion = str.find(buscar,0);
	/*explicacion:
	find: devuelve la posicion donde se encontro determinado string dentro de otro string
	sus parametros son:
	a) str = indica el string dentro del cual vamos a buscar
	b) buscar = indica el string buscado
	c) 0 = indica que comenzamos a buscar desde el primer caracter o sea el que tiene posicion 0
	
	find retorna -1 cuando no encuentra nada
	find retorna un numero entero >= 0 indicando la posicion de la primer coincidencia encontrada
	find no ignora mayusculas y minusculas
	*/
	if( posicion == -1 )
		cout << "Texto no encontrado" << endl;
	else
		cout << "Texto encontrado en la posicion " << posicion << endl;

	return 0;
}



