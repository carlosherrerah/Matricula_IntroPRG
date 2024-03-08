#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// Declaracion de Variables
	int n, r;
	char opcion = 's';

	do {
		cout << "Tabla: ";
		cin >> n;
		for (int i=1; i<=10; i++){
			r = n * i;
			cout << n << " X " << i << " = " << r << endl;
		}
		cout << "Deseas otra <s/n> ";
		cin >> opcion;
	} while (opcion == 's');

	getchar();
	return 0;
}

