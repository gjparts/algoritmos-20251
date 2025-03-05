/*APUNTADOR (pointer)
Permite alterar una variable desde un ambito externo.
Lo que hace un apuntador es enviar la variable a otro
ambito a traves de su direccion de memoria, a esto se le
conoce como pase por referencia (byref)*/
#include<iostream>
using namespace std;

void sumar(int z){
	//funcion que suma 1 al valor enviado
	z = z + 1;
}

void sumarConApuntador(int *z){
	*z = *z + 1;
}

/*hacer una funcion void que mediante apuntadores
eleve al cubo un numero entero enviado como parametro.
-> Sin usar pow y sin usar for o while*/
void cubo(int *numero){
	*numero = *numero * *numero * *numero;
}

/*Hacer una funcion void que mediante
apuntadores divida a la mitad el numero
que le enviemos como parametro.
Dicha funcion debe soportar solo float.*/
void mitad(float *numero){
	*numero = *numero/2.0f;
}

int main(){
	int x = 10;
	sumar(x);
	cout << x << endl;
	/*Observe que la x esta declarada en el main() y z en la funcion sumar()
	cuando se pasa x hacia la funcion sumar esta se ve afectada pero en
	dicha funcion (ambito externo); pero no afecta al ambito origen (main)
	Para lograr que se pueda afectar se usa apuntadores.*/
	cout << "valor de x: " << x << endl;
	cout << "referencia o direccion de memoria de x: " << &x << endl;
	
	sumarConApuntador(&x);
	cout << "valor de x: " << x << endl;
	cout << "referencia o direccion de memoria de x: " << &x << endl;
	
	int y = 3;
	cout << "y antes: " << y << endl;
	cubo(&y);
	cout << "y despues: " << y << endl;
	
	float r = 5;
	cout << "r antes: " << r << endl;
	mitad(&r);
	cout << "r despues: " << r << endl;
	
	return 777;
}
