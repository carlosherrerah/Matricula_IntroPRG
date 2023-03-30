#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n = 0;
	float salario, pagohora, pago, nomina=0;
	char opcion = 's';
	int horas, extras;
	char categoria = 'A';
	
	while (opcion =='s' || opcion =='S') {
		cout << "Horas trabajadas: ";
		cin >> horas;
		cout << "Cateroria <A,B,C>: ";
		cin >>categoria;
		switch (categoria) {
		case 'A':
			salario = 10000;
			break;
		case 'B':
			salario = 15000;
			break;
		case 'C':
			salario = 20000;
			break;
		default:
			cout << "categoria incorrecta"<< endl;
		}
		pagohora = salario / 40;
		if (horas > 40) {
			extras = horas - 40;
			pago = salario + extras*pagohora*2;
		} else {
			pago =  horas * pagohora;
		}
		cout << "Pago: " << pago << endl;
		nomina = nomina + pago;
		n = n + 1;
		
		cout <<"Deseas otro <s/n>: " ;
		cin >>opcion;
		cout << endl<< endl;
	}
	cout << "Total Empleados: "<<n<< endl;
	cout << "Total  $ Nomina: "<<nomina<< endl;
	
	return 0;
}

