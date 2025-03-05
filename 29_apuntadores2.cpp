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
using namespace std;

//hacer una funcion void a la que enviemos un arreglo apuntado
//de numeros float, dicha funcion va a dividir a la mitad cada
//elemento del arreglo enviado.
void arregloMitad(float *arreglo, int tamano){
	for( int i = 0; i < tamano; i++ ){
		arreglo[i] = arreglo[i]/2.0f;
	}
}

int main(){
	int arr1[] = {5,6,7,8,9};
	//el arreglo por si solo es un apuntador de memoria
	cout << arr1 << endl;
	
	float arr2[] = {5,8,7,10,9};
	arregloMitad(arr2,end(arr2)-begin(arr2));
	for( int i = 0; i < end(arr2)-begin(arr2); i++ )
		cout << arr2[i] << endl;
	
	return 111;
}







