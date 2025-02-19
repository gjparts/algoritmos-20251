#include<iostream>
#include<stdexcept> //libreria para manejo de excepciones
using namespace std;

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

/*Guard Clauses (instrucciones o sentencias de proteccion)
Son sentencias que protegen una funcion evitando que se le
alimente con valores no permitidos.
-> el objetivo es que al enviar un parametro incorrecto se
   genere una excepcion que pueda ser capturada por try-catch
-> el uso de excepciones es mas profesional que simplemente
   imprimir mensajes con cout
-> para lanzar excepciones se debe incluir la libreria stdexcept*/
double dividir(double dividendo, double divisor){
	//guard clause que impide que el divisor sea cero
	if( divisor == 0 )
		throw invalid_argument("divisor no puede ser cero.");
	
	return dividendo/divisor;
}











