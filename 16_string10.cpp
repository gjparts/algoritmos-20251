#include<iostream>
using namespace std;

int main(){
	//arreglo de string
	//prellenado
	string frutas[] = {"pera","manzana","uva","sandia","melocoton","kiwi"};
	//sin inicializar:
	string nombres[10];
	
	//imprimir cada uno de los arreglos
	for( int i = 0; i < end(frutas)-begin(frutas); i++ ){
		cout << frutas[i] << endl;
	}
	cout << "********************************" << endl;
	for( int i = 0; i < end(nombres)-begin(nombres); i++ ){
		cout << nombres[i] << endl;
	}
	cout << "********************************" << endl;
	cout << "La segunda fruta es: " << frutas[1] << endl;
	//un arreglo de string es un arreglo unidimensional; el string
	//permite obtener un caracter en determinada posicion usando corchetes
	//lo que hace creer que un arreglo de string es un arreglo bidimensional
	//pero en realidad no lo es.
	cout << "El caracter numero 3 del elemento 1 en frutas es: " << frutas[1][3] << endl;
	cout << "El caracter numero 6 del elemento 4 en frutas es: " << frutas[4][6] << endl;
	
	return 654;
}
