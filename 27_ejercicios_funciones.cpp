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
	
	return 34567;
}
