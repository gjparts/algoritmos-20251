#include<iostream>
using namespace std;

int main(){
	//cout = console out
	cout << "Hola UNAH" << endl;
	//cin = console in
	int num1;
	cout << "Digite un entero: ";
	cin >> num1;
	cout << "El valor de num1 es: " << num1 << endl;
	
	double a,b,c;
	cout << "Digite tres numeros con decimales, separelos con espacios: ";
	cin >> a >> b >> c;
	cout << "El valor de a es: " << a << endl;
	cout << "El valor de b es: " << b << endl;
	cout << "El valor de c es: " << c << endl;
	
	//ejecutar comandos de sistema operativo
	//hacer una pausa:
	system("pause");
	//limpiar la pantalla:
	system("cls");
	
	//puede correr comandos de windows como por ejemplo:
	system("dir c:\\"); //listar los archivos del folder raiz
	//borrar el archivo ERC.txt en el folder C:\Users\Gerardo\Documents
	system("del C:\\Users\\Gerardo\\Documents\\ERC.txt");
	
	cout << "Adios" << endl;
	
	
	return 123;
}
