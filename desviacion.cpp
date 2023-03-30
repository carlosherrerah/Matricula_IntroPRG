#include <iostream>
#include <cmath>
using namespace std;

float promedio(float datos[], int n) {
	float suma=0, prom;
	for(int i=0; i < n; i++){
		suma = suma + datos[i];
	}
	prom = suma / n;
	return prom;
}

float desviacion(float datos[], int n){
	float r, suma =0;
	float prom = promedio(datos, n);
	
	for(int i=0; i < n; i++){
		suma = suma + pow(datos[i]- prom, 2);
	}
	r = suma / n;
	r = sqrt(r);   //  r = pow(r, 0.5);
	return r;
}

int main(int argc, char *argv[]) {
	float prom;
	
	// Entrada
	int n = 5;
	float r;
	//float datos[]={4, 1, 11, 13, 2, 7};
	float datos[]={600, 470, 170, 430, 300};

	// Proceso  1. Promedio, 2. DS
	r = desviacion(datos, n);
	
	// Salida
	cout << r;
	return 0;
}



	
	
	

