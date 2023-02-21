#include <iostream>
using namespace std;

int main() {
	// Declaracion de Variables
	int cal, n; 
	float prom, suma=0; 
	// Entrada
	cout << " Sacar el promedio " << endl<<endl;
	cout << " Cuantas calificaciones: ";
	cin >> n; 3
	cout << endl;
	
	// Proceso
	for (int i=1;i<=n;i++) {
		cout << "Dame la calificacion " <<i<< ": ";
		cin >> cal;
		suma = suma +i;
	}
	prom = suma / n;

	// Salida
	cout << "El promedio es: " << prom;
	getchar();
	return 0;
}

