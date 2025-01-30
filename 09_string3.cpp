#include<iostream>
using namespace std;

int main(){
	/*
	Capture un string y luego imprimalo dejando
	tres asteriscos entre cada caracter sin afectar
	a la variable original, ejemplo:

	Digite un string: Pera
	Resultado: P***e***r***a***
	
	*/
	string str;
	cout << "Digite un string: ";
	getline(cin,str);
	
	cout << "Resultado: ";
	for( int i = 0; i < str.length(); i++ ){
		cout << str[i] << "***";
	}
	cout << endl << "La variable original es: " << str << endl;
	
	return 111;
}
