#include<iostream>
using namespace std;

int main(){
	/*Hacer un programa que calcule e imprima el
	promedio de 3 numeros double digitados por el usuario.
	Validar que los valores digitados sean numeros si es asi entonces
	imprimir el promedio, de lo contrario imprimir un mensaje
	indicando que alguno de los valores proporcionados no es numero.*/
	double a,b,c, promedio;
	string str1, str2, str3;
	
	cout << "a: ";
	getline(cin,str1);
	cout << "b: ";
	getline(cin,str2);
	cout << "c: ";
	getline(cin,str3);
	
	try{
		a = stod(str1);
		b = stod(str2);
		c = stod(str3);
		promedio = (a+b+c)/3.0;
		cout << "El promedio es " << promedio << endl;
	}catch(exception ex){
		cout << "Alguno de los valores digitados no es numero." << endl;
	}
	
	return 1012;
}
