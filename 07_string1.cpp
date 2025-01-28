#include<iostream>
using namespace std;

int main(){
	//string: es una coleccion de elementos char
	string nombre = "Gerardo Portillo";
	cout << nombre << endl;
	//obtener la longitud de un string
	cout << "longitud de nombre: " << nombre.length() << endl;
	
	//extraer los elementos de un string
	cout << "el primer caracter de nombre es " << nombre[0] << endl;
	cout << "el tercer caracter de nombre es " << nombre[2] << endl;
	cout << "el ultimo caracter de nombre es " << nombre[nombre.length()-1] << endl;
	//lo caracteres dentro de un string se numeran de 0 a N-1 como en los arreglos.
	//observe que el string se puede manipular como si fuese un arreglo; pero no es un arreglo
	//el string es una estructura de datos.
	
	//podemos reemplazarle char a un string (la comilla simple es el caracter 39)
	nombre[4] = 'X';
	nombre[9] = '7';
	nombre[nombre.length()-1] = '*';
	cout << nombre << endl;
	
	//concatenar string con otro string
	string s1 = "San Pedro Sula";
	string s2 = "Honduras";
	string s3 = "La ciudad de "+s1+" esta dentro de "+s2;
	cout << s3 << endl;
	
	//concatenar numero a string
	//va a ser necesario convertir cada numero a string con la funcion to_string
	int edad = 42;
	double salario = 10000;
	string s4 = "Soy "+nombre+", mi edad es "+to_string(edad)+" y mi salario es "+to_string(salario);
	cout << s4 << endl;
	
	//es posible concatenar un char a un string
	string s5 = "Manzana";
	s5 = s5 + 's';
	cout << s5 << endl;
	//otro ejemplo:
	char c9 = 'x';
	string s6 = "Baleada";
	s6 += c9;
	cout << s6 << endl;
	
	return 678;
}









