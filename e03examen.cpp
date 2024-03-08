#include <iostream>
using namespace std;

int main() {
	// Declaracion e Inicializacion de Variables
	int chico = 50;
	int grande = 100;
	int lavado = 30;
	int pagar =0;
	int size;
	int lavar;
	
	// entrada
	cout << "Lavado de Autos"<<endl;
	cout << "1.- carro Chico   2.- carro Grande"<<endl;
	cin >> size;
	cout << "Deseas lavado de motor 1.-Si  2.-No"<<endl;
	cin >> lavar;
	// Proceso
	if (size == 1) {
		pagar = chico;
	} else {
		pagar = grande;
	}
	if (lavar == 1) {
		pagar = pagar + lavado;
	} 
	cout << "Total a pagar: " << pagar <<endl;
	return 0;
}

