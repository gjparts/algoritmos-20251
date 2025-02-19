/*Funciones sin usar prototipado
Consiste en definir la funcion completa antes de main*/
#include<iostream>
using namespace std;

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

int main(){
	cout << sumar(4,5) << endl;
	cout << sumar(5L, 8L) << endl;
	cout << sumar(3, 5, 7) << endl;
	cout << sumar(2.5, 3.5, 4.2) << endl;
	cout << sumar(1.5f, 2.2f, 4.8f) << endl;
	cout << esPar(8) << endl;
	cout << esPar(21) << endl;
	
	return 111;
}
