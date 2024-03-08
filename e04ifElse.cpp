#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double r, a, b;
	int op;
	
	// entrada
	cout << "Operaciones basicas \n 1=+ 2=- 3=* 4=/ \n";
	cout << "Dame a: ";
	cin >> a;
	cout << "Dame b: ";
	cin >> b;
	cout << "\nDame la opcion [1..4]"<< endl;
	cin >> op;
	
	// Proceso
	if (op == 1) {
		r = a + b;
		cout << "La suma es: " << r << endl;
	} else if (op == 2) {
		r = a - b;
		cout << "La resta es: " << r << endl;
	} else if ( op == 3) {
		r = a * b;
		cout << "La multiplicacion es: " << r << endl;
	} else if ( op ==4 ) {
		r = a / b;
		cout << "La division es: " << r << endl;
	} else {
		cout << "Opcion Invalida" << endl;
	}
	
	return 0;
}

