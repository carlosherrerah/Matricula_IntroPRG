#include <iostream>
using namespace std;

void presentacion(){
	string name;
	cout<<"Mi primer Procedimiento"<<endl;
	cout<<"Espero entiendas el objetivo" << endl;
	cout<< "Give your name: " ;
	cin >> name;
}

void despedida(int r) {
	cout << "La suma es: " << r << endl;
	cout << "cuanta ciencia" << endl;
}

int sumar(int a, int b) {
	int r ;
	r = a + b;
	return r; 
}
	
int main() {
	int x, y, r;
	presentacion();
	cout << "Ingresa un numero a = ";
	cin >> x;
	cout << "Ingresa un numero b = ";
	cin >> y;
	r = sumar(x, y);
	cout << sumar(x,y);
	despedida(sumar(x,y));
	return 0;
}

    operaciones(a,b,operacion);

	
    string r = 	parimparV(5)
	parimparF(5)
		
	

