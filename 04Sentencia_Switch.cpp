#include <iostream>
using namespace std;

int main() {
	// Entrada 
	int opcion=1;
	char opc = 'a';
	float a=5, b=6, c;
	
	switch (opcion) {
	case 1:
		c = a + b;
		break;
	case 2:
		c = a - b;
		break;
	case 3:
		c = a * b;
		break;
	case 4:
		c = a / b;
		break;
	default:
		cout << "Pelo pol favol" << endl;
	}
	cout << c << endl;
	
	switch (opc) {
	case 'a':
		c = a + b;
		break;
	case 'b':
		c = a - b;
		break;
	case 'c':
		c = a * b;
		break;
	case 'd':
		c = a / b;
		break;
	default:
		cout << "Pelo pol favol" << endl;
	}
	cout << c << endl;
	return 0;
}

