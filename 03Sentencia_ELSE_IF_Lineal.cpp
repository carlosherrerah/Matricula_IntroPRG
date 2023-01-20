#include <iostream>
using namespace std;
// listo
int main() {
	float n = 0.000001;
	
	if (n > 0){
		cout << "Positivo" << endl;
	} else if ( n < 0) {
		cout << "Negativo" << endl;
	} else if ( n == 0) {
		cout << "Neutro" << endl;
	} else {
		cout << "Pues que escribiste" << endl;
	}
	getchar();
	return 0;
}

