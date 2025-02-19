#include<iostream>
#include<fstream>

using namespace std;

int main(){
	/*Hacer un programa que muestre un menu:
	
	DIARIO
	1) Agregar entrada al diario
	2) Mostrar todo el diario
	3) Borrar todo el diario
	4) Salir
	Digitar la opcion deseada: 
	
	* el menu se volverá a mostrar hasta que el usuario
	seleccione la opcion de salir
	* en la opcion 1: preguntar al usuario el texto de la entrada se
					  escribirá al final del diario sin perder lo que ya habia
	* en la opcion 2 imprimir el archivo de diario en pantalla hacer una pausa cada 10 lineas
	* en la opcion 3 se vaciara el archivo del diario
	
	system("pause"); //pausa
	system("cls"); //limpia la pantalla*/
	int opcion;
	fstream archivo;
	
	do{
		system("cls"); //limpiar pantalla
		cout << "DIARIO" << endl;
		cout << "1) Agregar entrada al diario" << endl;
		cout << "2) Mostrar todo el diario" << endl;
		cout << "3) Borrar todo el diario" << endl;
		cout << "4) Salir" << endl;
		cout << "Digitar la opcion deseada: ";
		cin >> opcion;
		cin.ignore(); //para evitar el bug de lectura con getline
		if( opcion == 1 ){
			//abrir el archivo para agregarle una linea
			archivo.open("diario.txt", ios::app);
			if( archivo.is_open() == true ){
				string str;
				cout << "******** AGREGAR ENTRADA AL DIARIO ********" << endl;
				cout << "Digite el texto a agregar: ";
				getline(cin,str);
				archivo << str << endl;
				archivo.close(); //cerrar el archivo
			}
			else
				cout << "No se puede escribir en el archivo o no tiene permiso." << endl;
		}
		if( opcion == 2 ){
			cout << "******** MOSTRAR TODO EL DIARIO ********" << endl;
			//abrir el archivo para lectura
			archivo.open("diario.txt", ios::in);
			if( archivo.is_open() == true ){
				string linea;
				int contador = 0;
				//imprimir el archivo y hacer una pausa cada 10 lineas
				while( archivo.eof() == false ){
					getline(archivo,linea);
					contador++;
					cout << contador << ") " << linea << endl;
					
					if( contador%10 == 0 ) system("pause"); //pausa cada 10 lineas
				}
				archivo.close();
			}
			else
				cout << "Archivo no existe o no tiene permiso" << endl;
		}
		if( opcion == 3 ){
			cout << "******** BORRAR EL DIARIO ********" << endl;
			cout << "Importante: esta accion es irreversible." << endl;
			cout << "Desea borrar el diario? S = Si, N = No: ";
			string respuesta;
			getline(cin,respuesta);
			if( respuesta == "S" || respuesta == "s" ){
				archivo.open("diario.txt",ios::out);
				archivo.close();
				cout << "Archivo Borrado Correctamente" << endl;
			}
		}
		
		system("pause"); //hacer una pausa
	}while( opcion != 4 );
	
	return 654;
}
