#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// Declaracion de variables
	int a, b, c;
	double d, dd, a2, x1, x2, re, im;
	
	// Entrada
	cout << "Ecuaciones cuadraticas"<< endl;
	cout << "Dame a: ";
	cin  >> a;
	cout << "Dame b: ";
	cin  >> b;
	cout << "Dame c: ";
	cin  >> c;
	
	// Proceso
	d = b*b - 4*a*c;
	d = pow(b,2) - 4*a*c;
	a2 = 2*a;
	if (d >= 0) {
		dd = sqrt(d);
		x1 = (-b + dd)/a2;
		x2 = (-b - dd)/a2;
		cout << "X1 = " << x1<<endl;
		cout << "X2 = " << x2<<endl;
	} else {
		cout <<"Es imaginaria\n";
		dd = sqrt(abs(d));
		re = -b / a2;
		im = dd / a2;
		cout << re << " +- " << im << "i"<<endl;
	}
	cout << "\n . . .Hecho"<<endl;
	getchar();
	return 0;
}

