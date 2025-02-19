#include<iostream>
using namespace std;

//prototipos de funcion
int sumar(int a, int b);
long sumar(long a, long b);
int sumar(int a, int b, int c);
double sumar(double a, double b, double c);
float sumar(float a, float b, float c);
bool esPar(int numero);

int main(){
	/*Funciones en c++
	permiten la reutilizacion de codigo por medio del
	llamado de las mismas.
	Puntos importantes a conocer:
	1) firma de funcion (signature): esta conformada por el
	   tipo de dato y nombre de la funcion asi como los tipos
	   de datos de sus parametros.
    2) puede haber dos o mas funciones con el mismo nombre
	   dentro del mismo ambito siempre y cuando tengan
	   diferente firma, a esto se le conoce como:
	   sobrecarga de funciones (overload)
	   
	En c++ las funciones se pueden implementar de dos formas:
	1) con prototipado
	2) sin prototipado*/
	
	//funciones con prototipado
	/*consiste en declarar antes de main() las firmas de las funciones
	y despues de main() se hace la implementacion de las funciones.
	Esto con el objetivo de tener un catalogo de funciones para leerse
	antes de comenzar a leer todo el programa.*/
	cout << sumar(4,5) << endl;
	cout << sumar(5L, 8L) << endl;
	cout << sumar(3, 5, 7) << endl;
	cout << sumar(2.5, 3.5, 4.2) << endl;
	cout << sumar(1.5f, 2.2f, 4.8f) << endl;
	cout << esPar(8) << endl;
	cout << esPar(21) << endl;
	
	return 111;
}
//implementacion de las funciones
bool esPar(int numero){
	if(numero%2 == 0)
		return true;
	else
		return false; 
}
int sumar(int a, int b){
	return a+b;
}
long sumar(long a, long b){
	return a+b;
}
int sumar(int a, int b, int c){
	return a+b+c;
}
double sumar(double a, double b, double c){
	return a+b+c;
}
float sumar(float a, float b, float c){
	return a+b+c;
}
