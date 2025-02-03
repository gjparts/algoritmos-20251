#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	//transformar un string a mayusculas
	//forma 1: alterando al string original
	string str1;
	cout << "Digitar str1: ";
	getline(cin,str1);
	//hacer la transformacion
	transform( str1.begin(), str1.end(), str1.begin(), ::toupper );
	cout << "El valor de str1 es: " << str1 << endl;
	
	//si quiere convertir a minusculas entonces use ::tolower
	
	//forma 2: sin alterar al string original
	string str2, copia;
	cout << "Digitar str2: ";
	getline(cin,str2);
	//sacar una copia de str2:
	copia = str2;
	//aplicar la transformacion a la copia
	transform( copia.begin(), copia.end(), copia.begin(), ::toupper );
	cout << "El valor de str2 es: " << str2 << endl;
	cout << "El valor de str2 en mayusculas es: " << copia << endl;
	
	return 987;
}
