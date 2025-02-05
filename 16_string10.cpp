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
	//obtener la longitud de un string dentro de un arreglo unidimensional
	cout << "La fruta 0 mide: " << frutas[0].length() << " caracteres" <<endl;
	cout << "La fruta 4 mide: " << frutas[4].length() << " caracteres" <<endl;
	//reemplazar un elemento dentro del arreglo:
	//cambiar la sandia por naranja
	cout << "La fruta 3 es " << frutas[3] << endl;
	frutas[3] = "naranja";
	cout << "La fruta 3 es " << frutas[3] << endl;
	//reemplazar caracteres en un string dentro de un arreglo
	//reemplazar la letra a en uva por un 4
	cout << "La fruta 2 es " << frutas[2] << endl;
	frutas[2][2] = '4';
	cout << "La fruta 2 es " << frutas[2] << endl;
	
	//concatenar un string a un elemento del arreglo de string
	cout << "La fruta 1 es " << frutas[1] << endl;
	frutas[1] = frutas[1] + " verde";
	cout << "La fruta 1 es " << frutas[1] << endl;
	
	//concatenar caracteres al final de un elemento dentro de un arreglo de string
	cout << "La fruta 5 es " << frutas[5] << endl;
	frutas[5] = frutas[5] + 's';
	cout << "La fruta 5 es " << frutas[5] << endl;
	
	return 654;
}












