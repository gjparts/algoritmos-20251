/*Apuntadores con Arreglos
Hay que tener en cuenta las consideraciones siguientes:
1) No se puede calcular el tamaño de un arreglo desde un ambito externo
2) cuando un arreglo es un parametro como apuntador no se le coloca
   los brackets []; pero si se le coloca el simbolo asterisco antes del parametro
3) cuando accedemos a los elementos de un arreglo apuntado, no es necesario
   en el ambito externo ponerle el simbolo asterisco
4) cuando mandamos a llamar la funcion con al arreglo apuntado en el ambito
   de origen no lo colocamos el ampersand (&) ya que un arreglo es un apuntador*/


#include<iostream>
#include<cmath>
#include<ctime>
#include<stdexcept>
using namespace std;

//hacer una funcion void a la que enviemos un arreglo apuntado
//de numeros float, dicha funcion va a dividir a la mitad cada
//elemento del arreglo enviado.
void arregloMitad(float *arreglo, int tamano){
	for( int i = 0; i < tamano; i++ ){
		arreglo[i] = arreglo[i]/2.0f;
	}
}

/*Hacer una funcion void que le enviemos un arreglo apuntado
de numeros double y que le altere todos sus elementos
elevando cada uno de ellos al cuadrado.
desde el main: imprimir el arreglo antes y despues
de aplicarle la funcion*/
void arregloCuadrado(double *arreglo, int tamano){
	for( int i = 0; i < tamano; i++ ){
		arreglo[i] = arreglo[i] * arreglo[i];
	}
}

/*hacer una funcion void que llene todos los elementos de un
arreglo apuntado de numeros enteros con numeros al azar
entre un valor minimo y un valor maximo todos proporcionados
como parametros de la funcion.
IMPORTANTE: el valor minimo no debe superar al valor maximo.
(evaluar como guard clause usando throw)*/
void llenarArregloAzar(int *arreglo, int tamano, int minimo, int maximo){
	if( minimo > maximo )
		throw invalid_argument("minimo no debe de superar a maximo");
	
	srand(time(NULL));
	for( int i = 0; i < tamano; i++ )
		arreglo[i] = rand()%(maximo-minimo+1)+minimo;
}


int main(){
	int arr1[] = {5,6,7,8,9};
	//el arreglo por si solo es un apuntador de memoria
	cout << arr1 << endl;
	
	float arr2[] = {5,8,7,10,9};
	arregloMitad(arr2,end(arr2)-begin(arr2));
	for( int i = 0; i < end(arr2)-begin(arr2); i++ )
		cout << arr2[i] << endl;
	
	double arr3[] = {2.2, 6, 8, 10, 2, 4.5, 1};
	cout << "arr3 antes **************" << endl;
	for( int i = 0; i < end(arr3)-begin(arr3); i++ ) cout << arr3[i] << endl;
	
	arregloCuadrado(arr3,end(arr3)-begin(arr3));
	cout << "arr3 despues **************" << endl;
	for( int i = 0; i < end(arr3)-begin(arr3); i++ ) cout << arr3[i] << endl;
	
	int arr4[50];
	llenarArregloAzar(arr4,end(arr4)-begin(arr4),5,37);
	cout << "*******************" << endl;
	for( int i = 0; i < end(arr4)-begin(arr4); i++ ) cout << arr4[i] << endl;
	
	return 111;
}







