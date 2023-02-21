#include <iostream>
using namespace std;

int main() {
	// declaracion de variables
	int i=0, r, n, j=0;
	// Entrada
	cout << "Que Tabla quieres: ";
	cin >> n;
	// Proceso
	while ( i <= 10) {
		r = n * i;
		// Salida
		cout << n << " X "<< i<< " = "<<r<< "->"<<j<<endl;
		j++;
		i=i+1;
		
	}
	
	
	
	// Salida
	
	getchar();
	return 0;
}

