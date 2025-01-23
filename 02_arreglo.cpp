#include<iostream>
using namespace std;

int main(){
	/*Arreglo (Array)
	Es una estructura de datos estatica, secuencial y homogenea.
	Hay dos formas de declarar arreglos en C++:
	1) crear un arreglo sin inicializar
	2) crear un arreglo prellenado (inicializado)*/
	
	//Ejemplos:
	//1) crear un arreglo sin inicializar
	//esto crea un arreglo de numeros enteros de 8 posiciones sin inicializar:
	int arreglo1[8];
	//2) crear un arreglo prellenado (inicializado)
	//esto crea un arreglo de 5 numeros enteros inicializado:
	int arreglo2[] = { 5, 7, 8, 1, 9 };
	
	//conocer la posicion en memoria de cada arreglo:
	cout << "La direccion de memoria de arreglo1 es: " << arreglo1 << endl;
	cout << "La direccion de memoria de arreglo2 es: " << arreglo2 << endl;
	
	//recuerde que un array es secuencial por lo tanto buscara existir
	//en un espacio de memoria consecutivo, si no encuentra dicho espacio
	//el programa va a crashear:
	//int arreglo9[5000000000];
	
	//imprimir los valores que hay en arreglo1
	cout << "Valores almacenados en arreglo1:" << endl;
	for(int i = 0; i < 8; i++){
		cout << arreglo1[i] << endl;
	}
	//en el print anterior notara que no todos los elementos de un
	//arreglo sin inicializar llegan a tener como valor de inicio CERO
	//esto se debe a que C++ toma la memoria reportada como libre por
	//el sistema operativo y a veces queda basura en dicha memoria.
	//lo que se recomienda en estos casos es llenar los elementos
	//del arreglo con CEROS por nuestra cuenta:
	for(int i = 0; i < 8; i++){
		arreglo1[i] = 0;
	}
	cout << "Valores almacenados en arreglo1:" << endl;
	for(int i = 0; i < 8; i++){
		cout << arreglo1[i] << endl;
	}
	
	//imprimir arreglo2
	cout << "Valores almacenados en arreglo2:" << endl;
	for(int i = 0; i < 5; i++){
		cout << arreglo2[i] << endl;
	}
	
	//conocer el tamaño de un arreglo
	//primero hay que conocer las posiciones inicial y final en memoria:
	cout << "Posicion inicial de arreglo2: " << begin(arreglo2) << endl; 
	cout << "Posicion final de arreglo2: " << end(arreglo2) << endl;
	cout << "Cantidad de elementos en arreglo2: " << end(arreglo2)-begin(arreglo2) << endl;
	
	float arreglo3[] = { 3.1416, 2.56677, 6.8, 1, 0.2344, 0.00002 };
	cout << "Valores almacenados en arreglo3:" << endl;
	for(int i = 0; i < end(arreglo3)-begin(arreglo3); i++){
		cout << arreglo3[i] << endl;
	}
	//el resultado de end-begin se puede almacenar en una variable int o long
	double arreglo4[] = { 3.44444, 5.333333, 8, 9, 1.565445, 2.22222, 0.015 };
	int tamanio4 = end(arreglo4)-begin(arreglo4);
	cout << "Valores almacenados en arreglo4:" << endl;
	for(int i = 0; i < tamanio4; i++){
		cout << arreglo4[i] << endl;
	}
	/*no olvide que para poder usar begin y end su compilador debe estar configurado
	a partir de la version 11 de C++, en el caso de devCpp debe agregar el parametro
	-std=c++11 en las opciones del compilador.*/
	
	return 777;
}








