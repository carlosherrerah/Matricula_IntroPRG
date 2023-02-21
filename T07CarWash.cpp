#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string size = "chico";
	char motor='n';
	char aroma='s';
	int queAroma = 2;
	float cuenta;
	
	if (size == "chico")
		cuenta = 50;
	else 
		cuenta = 100;
	
	if (motor == 's')
		cuenta = cuenta + 30;
	
	if (aroma =='s') {
		if (queAroma ==1)
			cuenta = cuenta + 5;
		else if (queAroma ==2)
			cuenta = cuenta + 10;
		else 
			cuenta = cuenta + 5;
	}
	
	cuenta = cuenta * 1.10;
	cout << cuenta;
	
	getchar();
	return 0;
}

