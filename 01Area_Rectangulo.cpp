#include <iostream>
using namespace std;   // cin  cout

int main() {
	int base, altura;
	float area;
	
	// Entrada
	cout << "Area del Rectangulo" << endl;
	cout << "Dame la base: " ;
	cin >> base;
	cout << "Dame la altura: " ;
	cin >> altura;
	
	// Proceso
	area = base * altura ;
	
	// Salida
	cout << "El area es = " << area << endl;
	
	getchar();
	return 0;
}
