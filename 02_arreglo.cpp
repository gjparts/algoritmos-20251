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
	
	return 777;
}








