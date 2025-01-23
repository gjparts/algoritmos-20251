#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main(){
	cout << "Hora de la computadora en milisegundos: " << time(NULL) << endl;
	/*Numeros al azar
	antes de comenzar hay que ejecutar el generador de numeros aleatorios
	y ponerle como semilla (seed) la hora del PC en milisegundos*/
	srand(time(NULL));
	//generar un numero al azar entre 3 y 12
	//rand()%(maximo-minimo+1)+minimo
	int numero = rand()%(12-3+1)+3;
	cout << "numero generado: " << numero << endl;
	
	//generar 10 numeros al azar entre 5 y 65 e imprimir cada numero
	for( int i = 1; i <= 10; i++ )
		cout << rand()%(65-5+1)+5 << endl;
	
	return 123;
}
