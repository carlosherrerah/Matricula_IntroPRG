#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string platillo = "grande";
	char opcion ='s';
	int bebida=3;
	int cerveza=2;
	float cuenta = 0;
	
	cout << "Restaurant" << endl;
	
	if (platillo == "chico") {
		cuenta = 50;
	} else if (platillo == "mediano") {
		cuenta = 75;
	} else { 
		cuenta = 100; 
	}
	if (opcion == 's') {
		if (bebida == 1) 
			cuenta = cuenta + 5;
		else if (bebida == 2)
			cuenta = cuenta + 10;
		else {
			if (cerveza == 1) 
				cuenta = cuenta + 20;
			else
				cuenta = cuenta + 30;
		}
	}
	cuenta = cuenta*1.10;
	cout << cuenta<< endl;
	getchar();
	return 0;
}

