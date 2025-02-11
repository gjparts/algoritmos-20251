#include<iostream>
#include<fstream>
using namespace std;

int main(){
	/*hacer un programa que abra el archivo ejemplo_24mil.txt, lo recorra
	y muestre cuantas lineas tiene, cual es la suma de todos sus numeros,
	cuantos numeros son pares, cuantos numeros son impares, y
	el promedio de todos sus numeros.
	Importante: No imprimir cada linea*/
	fstream archivo;
	
	//abrir archivo para lectura
	archivo.open("ejemplo_24mil.txt",ios::in);
	
	if( archivo.is_open() == true ){
		//recorrer archivo linea por linea
		string linea;
		int n = 0, suma = 0, pares = 0, impares = 0;
		while( archivo.eof() == false ){
			getline(archivo,linea);
			//sumar cada linea leida siempre y
			//cuando se pueda convertir a numero
			try{
				suma += stoi(linea);
				//clasificar par e impar
				if( stoi(linea)%2 == 0 ) pares++; else impares++;
					
			}catch(exception ex){}
			
			n++; //sumar 1 al contador de lineas
		}
		archivo.close(); //cerrar el archivo
		cout << "Numero de lineas: " << n << endl;
		cout << "Suma de los numeros: " << suma << endl;
		cout << "Pares: " << pares << endl;
		cout << "Impares: " << impares << endl;
		cout << "Promedio: " << suma/(pares+impares) << endl;
	}else
		cout << "Archivo no existe o no tiene permiso." << endl;
	
	return 765;
}
