#include<iostream>
#include<stdexcept>
#include<cmath>
using namespace std;

/*1. Escriba una funcion llamada elevar que reciba dos numeros enteros,
	uno para la base y otro para la potencia, la funcion debe retornar un entero
	resultado de elevar el numero base a la potencia sin utilizar la funcion pow.
	-> la potencia no puede ser un numero negativo. (guard clause)*/
//si desea soportar enteros mas grandes que int, recomiendo usar long double*/
long double elevar(long double base, long double potencia){
	if( potencia < 0 )
		throw invalid_argument("potencia no puede ser negativa"); //guard clause
	
	long double tmp = 1;
	for( int i = 1; i <= potencia; i++ ){
		tmp = tmp * base;
	}
	return tmp; //retornar o devolver el resultado
}
/*2. Defina una funcion llamada hipotenusa que retorne
la longitud de la hipotenusa de un triángulo rectángulo,
la funcion recibira los lados de dicho triangulo.
La funcion debera funcionar con numeros double, se le permite usar sqrt() y pow().*/
double hipotenusa( double opuesto, double adyacente ){
	return sqrt( pow(opuesto,2)+pow(adyacente,2) );
}
/*3. Escriba una funcion que reciba dos numeros enteros y retorne true
si el primer numero es multiplo del segundo o false en caso contrario.*/
bool esMultiplo( int a, int b ){
	//forma 1:
	/*if( a%b == 0 )
		return true;
	else
		return false;*/
	//forma 2:
	return ( a%b == 0 );
	//forma 3: usando el operador ternario
	//return ( a%b == 0 ? true : false );
}
/*4. Escriba una funcion que imprima un rectagulo de caracteres,
dicha funcion recibira como parametros el ancho y largo del mismo
asi como otro parametro con el caracter a usar para dibujar
dicho rectangulo.*/














