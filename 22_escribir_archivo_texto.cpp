#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream archivo;
	
	//abrir el archivo el modo de escritura
	//si el archivo no existe, c++ lo creara por nosotros.
	archivo.open("pruebas.txt", ios::out);
	/*fstream soporta dos modos de escritura:
	ios::out	sobreescribe el archivo perdiendo todo lo que estaba antes (OUTPUT)
	ios::app	agrega el contenido al final del archivo sin perder lo que ya estaba (APPEND)*/
	
	//validar que se logro abrir el archivo
	if( archivo.is_open() == true ){
		//escribir informacion en el archivo
		archivo << "Hola UNAH" << endl;
		archivo << 2+2 << endl;
		double x = 3.1416;
		archivo << "El valor de x es " << x << endl;
		archivo << "Rojo\tAmarillo\tAzul" << endl;
		archivo.close(); //cerrar el archivo al terminar
		cout << "Fin del programa exitoso" << endl;
	}
	else
		cout << "No se puede escribir el archivo o no tiene permiso." << endl;
	
	return 4321;
}
