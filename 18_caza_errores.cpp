#include<iostream>
using namespace std;

int main(){
	/*Caza de errores
	El bloque try-catch permite deciri que hacer
	en caso de presentarse una excepcion controlada
	o sea aquella que se envia por medio de throw.*/
	
	/*Hacer un programa que pida al usuario digitar
	un numero entero. Si lo digitado no es un numero
	entonces mostrar un mensaje: NO ES UN NUMERO ENTERO
	de lo contrario imprimir el numero digitado y un
	mensaje de despedida.
	*/
	string str;
	int n;
	
	cout << "Digite un numero entero: ";
	getline(cin,str);
	//leer el numero como un string, luego al tratar
	//de convertirlo a entero si hay falla mostramos el mensaje
	//de falla
	try{
		n = stoi(str);
		cout << "El numero digitado es: " << n << endl;
	}catch(exception ex){
		cout << "NO ES UN NUMERO ENTERO" << endl;
	}
	
	cout << "Adios" << endl;
	
	return 111;
}
