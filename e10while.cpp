#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char opcion='s';
	int n;
	string cadena;
	
	while (opcion == 's' ) { 
		system("cls");
		cout << "Numero Par o Impar" << endl;
		cout << "Dame un numero: ";
		cin >> n;
		
		if (n % 2 == 0) {
			cadena = "par";
		} else {
			cadena = "impar";
		}
		cout << "El " << n << " es " << cadena;
		
		cout << "\nDeseas otra operacion <s/n> ";
		cin >> opcion;
		
	}
	
	cout << "\n. . . Hecho";
	getchar();

	return 0;
}

