#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	/*Hacer un programa que solicite al usuario digitar dos
	cadenas de texto, una vez capturadas que el programa diga
	si son iguales o si son diferentes; pero ignorando
	mayusculas y minusculas y SIN alterar
	las dos cadenas de texto leidas.*/
	string s1, s2, copia1, copia2;
	cout << "Digite el string s1: ";
	getline(cin,s1);
	cout << "Digite el string s2: ";
	getline(cin,s2);
	
	//sacar copia de los string originales
	copia1 = s1;
	copia2 = s2;
	
	//transformar las copias a mayusculas
	transform( copia1.begin(), copia1.end(), copia1.begin(), ::toupper );
	transform( copia2.begin(), copia2.end(), copia2.begin(), ::toupper );
	
	//comparar las copias puesto que al estar en el mismo casing
	//entonces la comparacion sera ignorando mayusc./minusc.
	if( copia1 == copia2 )
		cout << "Ambos string son iguales ignorando mayusc./minusc.";
	else
		cout << "ambos string son diferentes.";
	
	cout << endl;
	
	return 345;
}








