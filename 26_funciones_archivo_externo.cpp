/*Funciones sin prototipado en archivo externo
Consiste en definir las funciones en un archivo aparte
el cual normalmente lo nombramos con extension .h (header)
La ventaja de esto es que el codigo es mas limpio y el archivo
.h se puede reutilizar.*/
#include<iostream>
#include "funciones.h"
using namespace std;

int main(){
	cout << sumar(4,5) << endl;
	cout << sumar(5L, 8L) << endl;
	cout << sumar(3, 5, 7) << endl;
	cout << sumar(2.5, 3.5, 4.2) << endl;
	cout << sumar(1.5f, 2.2f, 4.8f) << endl;
	cout << esPar(8) << endl;
	cout << esPar(21) << endl;
	
	//prueba de la funcion con guard clause
	try{
		cout << dividir(5,2) << endl;
		cout<< dividir(7,0) << endl; //divisor es cero, dispara la excepcion
	}catch(exception &ex){
		cout << ex.what() << endl;
		//observe que ex ahora lleva un & en la declaracion
		//esto permite extraer el mensaje lanzado por medio de
		//la funcion what()
	}
	cout << "Adios" << endl;
	
	return 111;
}








