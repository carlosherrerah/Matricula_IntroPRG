#include <iostream>
using namespace std;

int main() {
	int n;
	char opcion ='s';
	
	while (opcion == 's'){
		cout << "Tabla del: ";
		cin >> n;
		for (int i=1;i<=10;i++) {
			cout<<n<<" X "<<i<<" = "<<n*i<<"\n";
		}
		cout <<endl<<"\n";
		cout << "Deseas otro <s/n>: ";
		cin >> opcion;
	}
	cout << "Gracias por participar"<<endl;
	
	return 0;
}

