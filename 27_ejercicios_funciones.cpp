#include<iostream>
#include "catalogo.h"
using namespace std;

int main(){
	cout << elevar(2,4) << endl;
	cout << elevar(3,8) << endl;
	cout << elevar(3,0) << endl;
	cout << elevar(3,1) << endl;
	//cout << elevar(3,-1) << endl;
	
	cout << "Hipotenusa ******" << endl;
	cout << hipotenusa(4,5) << endl;
	cout << hipotenusa(10.5,22.3) << endl;
	
	cout << "es multiplo ******" << endl;
	cout << esMultiplo(4,2) << endl;
	cout << esMultiplo(5,3) << endl;
	cout << esMultiplo(200,10) << endl;
	//recuerde que en cualquier lenguaje de programacion
	//si Usted imprime una expresion booleana
	//lo que se devolvera sera true o false (1 o 0)
	cout << ( 6 > 2 ) << endl;
	cout << ( 6 > 2 && 4 == 4 ) << endl;
	cout << ( 7 != 7 ) << endl;
	//tambien recuerde que true suma 1, false suma 0:
	int algo = 0;
	algo += ( 5 > 3 );
	algo += ( 8 > 4 );
	algo += ( 20 > 100 );
	cout << "algo: " << algo << endl;
	
	/*Las funciones void no retornan valor alguno; por lo tanto
	no se pueden asignar a variables o a flujos de salida:*/
	//cout << imprimirRectangulo(4,5,'*') << endl;
	//string cuadro = imprimirRectangulo(4,5,'*');
	//lo correcto es solo mandarlas a llamar:
	imprimirRectangulo(4,5,'*');
	imprimirRectangulo(8,8,'x');
	
	/*C++ infiere el tipo de dato de acuerdo a si lleva decimales o no.
	Si no lleva decimales se considera como int
	Si lleva decimales se considera double
	Si lleva decimales y una letra f al final se considera float
	Si no lleva decimales y le pone una L al final se considera long*/
	cout << areaCirculo(45.0) << endl;
	cout << areaCirculo(45.0f) << endl;
	
	//pero si almacena los valores en variables; entonces
	//la deteccion del tipo la da el tipo de dato de la variable
	//por eso note que al asignar f1 no fue necesario poner la f
	float f1 = 5;
	cout << areaCirculo(f1) << endl;
	double d1 = 8;
	cout << areaCirculo(d1) << endl;
	
	cout << minimo(5.4, 2.2, 3.4567) << endl;
	cout << minimo(7, 4, 1) << endl;
	cout << minimo(6.3f, 7.4f, 8.2f) << endl;
	
	cout << estaEnMayusculas("baleada") << endl;
	cout << estaEnMayusculas("REFRESCO") << endl;
	cout << estaEnMayusculas("UniversidaD") << endl;
	
	return 34567;
}






