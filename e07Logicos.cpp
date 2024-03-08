#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	
	cout << "Dame un numero [0..10]"<< endl;
	cin >> numero;
	// Y = &&    O = ||
	if (numero >= 0 && numero <=  10  ){
		cout << "OK"<<endl;
		
	} else {
		cout << "Niño tontuelo" << endl;
	} 
	if ( numero != 0)

	return 0;
}

