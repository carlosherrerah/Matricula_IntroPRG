#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	char opcion ='s';
	
	do {
		cout << "Tabla del: ";
		cin >> n;
		for (int i=1;i<=10;i++) {
			cout<<n<<" X "<<i<<" = "<<n*i<<"\n";
		}
		cout <<endl<<"\n";
		cout << "Deseas otro <s/n>: ";
		cin >> opcion;
	} while (opcion == 's');
	cout << "Gracias por participar"<<endl;
	
	return 0;
}

