#include<iostream>
using namespace std;

int main(){
	/*CONVERSIONES
	stoi		string to int (de string a entero)
	stod		string to double (de string a double)
	stof		string to float (de string a float)
	stoll		string to long long (de string a long long)
	to_string	de numero a string
	*/
	//string a entero:
	string str = "98.56";
	int entero = stoi(str); //conversion
	cout << "str: " << str << endl;
	cout << "entero: " << entero << endl;
	//conversion fallida:
	/*str = "honduras";
	entero = stoi(str);*/
	//lo anterior falla porque no es posible convertirlo a entero
	
	//si el string a convertir comienza con numeros y luego
	//le siguen caracteres que no son numeros entonces stoi
	//trunca la parte no numerica y conserva la parte entera
	str = "123abc";
	entero = stoi(str);
	cout << "str: " << str << endl;
	cout << "entero: " << entero << endl;
	
	//de string a float
	str = "3.14168ssss";
	float f1 = stof(str);
	cout << "str: " << str << endl;
	cout << "f1: " << f1 << endl;
	
	//de string a double
	str = "4.56567";
	double d1 = stod(str);
	cout << "str: " << str << endl;
	cout << "d1: " << d1 << endl;
	
	//de string a long
	str = "1234123412345";
	//int pruebaEntero = stoi(str);
	//stoi falla cuando el entero es demasiado grande, en esos
	//casos utilice variable long y funcion stol
	long long pruebaLong = stoll(str);
	cout << "str: " << str << endl;
	//cout << "pruebaEntero: " << pruebaEntero << endl;
	cout << "pruebaLongLong: " << pruebaLong << endl;
	
	//de int a string
	int edad = 42;
	string str2 = to_string(edad);
	cout << "edad: " << edad << endl;
	cout << "str2: " << str2 << endl;
	
	//de float a string
	float f2 = 45.678;
	str2 = to_string(f2);
	cout << "f2: " << f2 << endl;
	cout << "str2: " << str2 << endl;
	
	//de double a string
	double d2 = 45.678;
	str2 = to_string(d2);
	cout << "d2: " << d2 << endl;
	cout << "str2: " << str2 << endl;
	
	//de long long a string
	long long valor = 1234123412345;
	str2 = to_string(valor);
	cout << "valor: " << valor << endl;
	cout << "str2: " << str2 << endl;
	
	return 777;
}






