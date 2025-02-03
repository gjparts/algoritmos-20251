#include<iostream>
using namespace std;

int main(){
	//Bug que ocurre cuando venimos de leer cualquier
	//numero y luego queremos leer un string a traves
	//de la consola del sistema.
	//generacion del problema:
	int numero;
	string str;
	
	cout << "Digite un numero entero: ";
	cin >> numero;
	cout << "Digite un string: ";
	//cuando viene de leer un numero con cin y desea leer un string
	//debera vaciar al buffer de entrada ejecutando:
	cin.ignore();
	getline(cin,str);
	
	cout << "El valor de numero es: " << numero << endl;
	cout << "El valor de str es: " << str << endl;
	
	return 777;
}
