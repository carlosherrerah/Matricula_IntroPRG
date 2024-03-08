#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// Declaracion de variables
	int r;
	char opcion='s';

	do {
		for(int i=1; i <=10; i++ ) {
			cout << "Tabla del " << i << " : \n"; 
			for(int j=10; j>=1; j-- ) {
				r = i * j;
				if (r%2==0) {
					cout << i << " X " << j << " = " << r << endl;
				} 
				
			}
			cout << endl;
		
		}
		cout << "Deseas otro <s/n>: ";
		cin >> opcion;
	} while(opcion =='s');
	
	
	
	
	
	
	
	
	
	return 0;
}

