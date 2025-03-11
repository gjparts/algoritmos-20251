/*Apuntadores con strig
Se usan igual que los apuntadores con tipos de dato
primitivos; excepto que no se puede tener acceso
a los atributos y metodos del string desde el ambito
externo.*/
#include<iostream>
#include<algorithm>
using namespace std;

/*hacer una funcion void que reciba un string apuntado
y lo altere pasandolo todo a mayusculas*/
void mayusculas(string *str){
	//como no podemos tener acceso a end y begin del string en el ambito externo
	//entonces sacamos una copia local del string apuntado y trabajamos
	//sobre la copia
	string copia = *str;
	transform(copia.begin(), copia.end(), copia.begin(), ::toupper);
	//sobreescribir la variable apuntada con la copia
	*str = copia;
}

/*hacer una funcion void que reciba un string apuntado y que lo altere
reemplazandole los espacios en blanco por guiones bajos.*/
void reemplazarEspaciosPorGuiones(string *str){
	string copia = *str; //sacar la copia
	//trabajar sobre la copia:
	for( int i = 0; i < copia.length(); i++ )
		if( copia[i] == ' ' ) copia[i] = '_';
	//sobreescribir la variable apuntada con la copia
	*str = copia;
}

/*hacer una funcion void que reciba un string apuntado y que lo altere
eliminandole los espacios en blanco*/
void eliminarEspacios(string *str){
	string copia = *str; //sacar la copia
	string nueva = "";
	//vamos copiando al nuevo string solo lo que nos interesa
	for( int i = 0; i < copia.length(); i++ ){
		if( copia[i] != ' ' ) nueva += copia[i];
	}
	//sobreescribir la variable apuntada con el nuevo string
	*str = nueva;
}

int main(){
	string x = "gerardo";
	mayusculas(&x);
	cout << x << endl;
	
	string y = "San Pedro Sula";
	reemplazarEspaciosPorGuiones(&y);
	cout << y << endl;
	
	y = "San Pedro Sula";
	eliminarEspacios(&y);
	cout << y << endl;
	
	return 777;
}




