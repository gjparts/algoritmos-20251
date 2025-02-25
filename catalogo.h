#include<iostream>
#include<stdexcept>
//lo siguiente permite a math.h o cmath
//incluir las constantes de matematicas
//como PI, logaritmos y demas.
//IMPORTANTE: esto va antes de incluir math.h o cmath
#define _USE_MATH_DEFINES
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
void imprimirRectangulo(int ancho, int largo, char caracter){
	for( int i = 1; i <= largo; i++ ){
		for( int j = 1; j <= ancho; j++ ){
			cout << caracter;
		}
		cout << endl;
	}
}
/*5. Hacer una funcion que retorne el area de un circulo,
dicha funcion debera recibir el radio como parametro.
Usando sobrecarga de funciones haga que la funcion pueda
trabajar con numeros double o con numeros float.*/
double areaCirculo(double radio){
	return M_PI*pow(radio,2);
}
float areaCirculo(float radio){
	return M_PI*pow(radio,2);
}










