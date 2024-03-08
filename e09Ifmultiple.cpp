#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// Declaracion de Variables
	int edad;
	// Entrada
	cout << "Etapas de Edades" << endl;
	cout <<  "Dame la Edad: " ;
	cin >> edad;
	// Proceso
	if (edad >=0 && edad <=29) {
		cout << "Primera Edad"<< endl;
	} else 	if (edad >= 30 && edad <= 59) {
		cout << "Segunda Edad"<< endl;
	} else 	if (edad >=60 && edad <= 89) {
		cout << "Tercera Edad"<< endl;
	} else 	if (edad >=90) {
		cout << "Horas Extras" << endl;
	} else {
		cout << "Pues que capturaste %( )& ";
	}
	cout << ". . .Hecho" << endl;
	getchar();
	
	return 0;
}

