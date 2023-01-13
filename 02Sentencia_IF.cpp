#include <iostream>
using namespace std;      // cin  cout

// Objetivo: Calculo de temperaturas
//   Clase:  Sentencia IF

/*
este programa ...
esta chido
*/

int main() {
	int opcion;
	double c, f, r;    // float o double
	
	// Entrada
	cout << "Calculo de Temperaturas" << endl<< endl;
	cout << "Menu:" << endl;
	cout << "1. Farenheit a Celcius"    << endl;
	cout << "2. Celcius   a Farenheit"  << endl;
	cout << "opcion: " ;
	cin  >> opcion;
	
	// Proceso
	if (opcion == 1) {
		cout << "\nDame los F: " ;
		cin >> f;
		r = 5/9.0*(f - 32);
		
	} else {
		cout << "Dame los C: " ;
		cin >> c;
		r = 9/5.0*c + 32;
	}
	cout << "El resultado es = " << r << endl;
	if ( r >= 50) {
		cout << "Estas peligroso" << endl;
	}	
	getchar();   // para detener el programa 
	return 0;
}

