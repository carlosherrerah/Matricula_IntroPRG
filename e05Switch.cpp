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
	switch (op) {
	case 1:
		r = a + b;
		cout << "La suma es: " << r << endl;
		break;
	case 2:
		r = a - b;
		cout << "La resta es: " << r << endl;
		break;
	case 3:
		r = a * b;
		cout << "La multiplicacion es: " << r << endl;
		break;
	case 4:
		r = a / b;
		cout << "La division es: " << r << endl;
		break;
	default:
		cout << "Opcion Invalida" << endl;
	};
	getchar();
	return 0;
}

