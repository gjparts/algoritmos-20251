#include<iostream>
#include <regex>

using namespace std;

string trim(string str){
	regex plantilla("^\\s+|\\s+$");
  	str = regex_replace(str, plantilla, "");
  	return str;
}

int main(){
	string str = "      Hola a todos     como estan?      ";
	
	cout << "___" << trim(str) << "___" << endl;
	
	return 123;
}
