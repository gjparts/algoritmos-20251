#include<iostream>
using namespace std;

int main(){
	int arr[5];
	cout << "inicio: " << begin(arr) << endl;
	cout << "fin: " << end(arr) << endl;
	
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;
	cout << &arr[2] << endl;
	cout << &arr[3] << endl;
	cout << &arr[4] << endl;
	
	cout << "Adios" << endl;
	
	return 765;
}
