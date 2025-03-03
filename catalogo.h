#include<iostream>
#include<stdexcept>

//lo siguiente permite a math.h o cmath
//incluir las constantes de matematicas
//como PI, logaritmos y demas.
//IMPORTANTE: esto va antes de incluir math.h o cmath
#define _USE_MATH_DEFINES
#include<cmath>
#include<algorithm>
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
/*6. Escriba una función llamada minimo que retorne
el menor de tres números, dicha funcion debera poder
funcionar con tres numeros enteros o con
tres numeros double o tres numeros float*/
/*Para optimizar la sobrecarga de funciones y no repetir el mismo
codigo varias veces, se identifica la funcion con el tipo de mayor precision
y esa sera la funcion original, las demas sobrecargas la van a reutilizar.*/

//double es el de mayor precision
double minimo(double a, double b, double c){
	if( a <= b && a <= c ) return a;
	if( b <= a && b <= c ) return b;
	if( c <= a && c <= b ) return c;
}
int minimo(int a, int b, int c){
	//pasar los parametros al tipo de dato de la funcion original
	double x = a, y = b, z = c;
	return minimo(x,y,z); //mandar a llamar a la funcion original
}
float minimo(float a, float b, float c){
	//pasar los parametros al tipo de dato de la funcion original
	double x = a, y = b, z = c;
	return minimo(x,y,z); //mandar a llamar a la funcion original
}

/*7. Escriba una funcion que devuelva true si una cadena
de texto esta escrita toda en mayusculas o false si no es así.*/
bool estaEnMayusculas(string str){
	//comparar a str con su version en mayusculas
	string copia = str;
	transform(copia.begin(), copia.end(), copia.begin(), ::toupper);
	/*if( str == copia )
		return true;
	else
		return false;*/
	return ( str == copia ? true : false );
}

/*8. Escriba una funcion a la cual se le proporcione como
parametros un caracter y una cadena de texto, dicha funcion
debera devolver un entero con la posicion de la primer coincidencia
en la que fue encontrado el caracter proporcionado dentro de
la cadena de texto proporcionada, si el caracter no es
encontrado entonces devolver -1.
No tiene permitido utilizar la funcion find del string.*/
int encontrar(char buscar, string str){
	for(int i = 0; i < str.length(); i++){
		if( str[i] == buscar )
			return i; //return termina con la estructura de
			          //repeticion y con la funcion
	}
	//si llego hasta aqui quiere decir que for termino
	//y no encontro nada
	return -1;
}

/*9. Escriba una funcion que reciba como parametros un string y un
arreglo de string, dicha funcion debera buscar el string proporcionado
dentro arreglo, si la cadena es encontrada entonces la funcion
retornara un numero entero con la posicion de la primer
coincidencia en la que se encontró, si no se encuentra
nada entonces retornar -1*/

//cuando un parametro de la funcion es un arreglo de string
//este se coloca sin tamaño dentro de los []
int buscarStringEnArreglo(string buscar, string arreglo[], int tamano){
	//el uso de end y begin para un arreglo que viene como parametro
	//de funcion no es posible. Por ello enviamos el tamanio del arreglo
	//en un tercer parametro.
	for( int i = 0; i < tamano; i++ ){
		if( buscar == arreglo[i] )
			return i;
	}
	//si llego aqui es porque no encontro nada
	return -1;
}















