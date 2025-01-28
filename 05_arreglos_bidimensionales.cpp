#include<iostream>
using namespace std;

int main(){
	/*Arreglo bi-dimensional: es un arreglo principal
	que apunta a otros arreglos secundarios.*/
	//forma 1: declarar el arreglo sin inicializar
	int arreglo1[6][3];
	//luego le puede colocar valores a algunas posiciones
	arreglo1[0][2] = 123;
	arreglo1[1][1] = 89;
	arreglo1[3][0] = 111;
	arreglo1[5][2] = 777;
	arreglo1[4][2] = 444;
	arreglo1[2][2] = 45;
	
	//recorrer arreglo1 e imprimirlo de forma tabular (en forma de tabla)
	//usaremos for anidados
	//primero recorrer el arreglo principal (filas)
	for( int i = 0; i < end(arreglo1)-begin(arreglo1); i++ ){
		//ahora recorrer cada elemento del arreglo secundario (columnas)
		for( int j = 0; j < end(arreglo1[i])-begin(arreglo1[i]); j++ ){
			//imprimir el j-esimo valor dentro del i-esimo arreglo
			cout << arreglo1[i][j] << "\t";
		}
		cout << endl; //pasar al siguiente renglon
	}
	
	//forma 2: declarar arreglo prellenado
	//importante: es obligatorio colocar el tamaño de arreglo secundario
	//en este caso tengo 6 numeros para cada arreglo secundario.
	int arreglo2[][6] = {
		{1, 3, 6, 2, -8, 9},
		{6, 5, 7, -1, 1, 0},
		{10, 30, 12, 22, 45, 777},
		{100, 300, 60, -12, 0, 12}
	};
	
	cout << "*******************************" << endl;
	for( int i = 0; i < end(arreglo2)-begin(arreglo2); i++ ){
		//ahora recorrer cada elemento del arreglo secundario (columnas)
		for( int j = 0; j < end(arreglo2[i])-begin(arreglo2[i]); j++ ){
			//imprimir el j-esimo valor dentro del i-esimo arreglo
			cout << arreglo2[i][j] << "\t";
		}
		cout << endl; //pasar al siguiente renglon
	}
	
	return 111;
}







