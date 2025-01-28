#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;

int main(){
	/*Hacer un arreglo bidimensional de numeros enteros de 4x7.
	Llenar cada elemento del arreglo con un numero al azar
	entre -3 y 29. No importa que se repitan numeros.
	Al final imprimir dicho arreglo en formato tabular.*/
	srand(time(NULL)); //generador de numeros al azar
	int arreglo[4][7];
	
	//llenar e imprimir el arreglo
	for( int i = 0; i < end(arreglo)-begin(arreglo); i++ ){
		for( int j = 0; j < end(arreglo[i])-begin(arreglo[i]); j++ ){
			arreglo[i][j] = rand()%(29-(-3)+1)+(-3);
			cout << arreglo[i][j] << "\t";
		}
		cout << endl;
	}
}
