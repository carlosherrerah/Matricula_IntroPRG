#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i;
	int n = 10;
	
	// For 1..10
	cout << "For 01..10: "<< endl;
	for (int i=1; i<= n; i++) {
		cout << i << "\t";
	}
	cout << endl;
	
	// For 10..1
	cout << "For 10..1: "<< endl;
	for (int i= n; i>=1; i--) {
		cout << i << "\t";
	}
	cout << endl;
	
	// while 1..10
	cout << "While 01..10: "<< endl;
	i = 1;
	while (i <= n) {
		cout << i << "\t";
		i=i+1;
	}
	cout << endl;
	
	
	
	return 0;
}

