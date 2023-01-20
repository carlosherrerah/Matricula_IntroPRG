#include <iostream>
using namespace std;

int main() {
	double n = 0.0;
	
	if (n > 0) {
		cout << "Positivo" << endl;
	} else {
		if (n < 0) {
			cout << "Negativo" << endl;
		} else {
			if (n == 0) {
				cout << "Neutro" << endl;
			} else {
				cout << "Que escribiste" << endl;
			}
		}
	}
	
	getchar();
	return 0;
}

