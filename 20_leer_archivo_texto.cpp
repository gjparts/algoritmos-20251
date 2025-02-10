#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//Lectura de archivo de texto
	fstream archivo; //estructura de datos para leer archivos
	
	//abrir el archivo para lectura:
	archivo.open("ejemplo_24mil.txt",ios::in);
	//observe que ios:in indica que vamos a abrir para leer
	
	//verificar que el archivo se pudo abrir
	if( archivo.is_open() == true ){
		cout << "Archivo abierto" << endl;
		//recorrer el archivo
		//este proceso sucede linea por linea hasta llegar
		//al final del archivo o sea al end of file (eof)
		string linea;
		//contador de lineas
		int n = 0;
		while( archivo.eof() == false ){
			//para poder recorrer el archivo debemos recuperar
			//linea por linea, sino nunca llegaremos al eof
			getline(archivo,linea);
			//si imprime cada linea, se hace mas lento el proceso de recorrer
			cout << linea << endl;
			n++;
		}
		cout << "Se ha llegado al final del archivo" << endl;
		cout << "Numero de lineas: " << n << endl;
		//buena practica: cierre el archivo una vez que lo deje de usar
		archivo.close();
	}
	else
		cout << "Archivo inexistente o no tiene permiso." << endl;
	
	return 444;
}

