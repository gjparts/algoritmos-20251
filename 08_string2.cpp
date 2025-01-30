#include<iostream>
using namespace std;

int main(){
	//leer datos desde la consola hacia una variable string
	string nombre;
	
	/*cout << "Digite su nombre completo: ";
	cin >> nombre;
	cout << "El nombre digitado usando cin es: " << nombre << endl;*/
	
	/*lo anterior da problemas ya que cin esta diseñado para capturar un valor
	por variable, entonces al encontrar un espacio en blanco intenta guardar
	cada porcion separada por espacios en blanco en diferentes variables.*/
	
	//solucion: los string se recomienda capturarlos usando la funcion getline
	cout << "Digite su nombre completo: ";
	getline(cin,nombre);
	//1) el primer parametro de getline es el origen desde donde vamos a leer
	//   el string en este caso usamos cin indicando que leeremos desde la consola del sistema
	//2) el segundo parametro indica la variable string de destino a donde almacenaremos lo
	//   leido en el origen.
	cout << "El nombre digitado usando getline es: " << nombre << endl;
	
	return 789;
}
