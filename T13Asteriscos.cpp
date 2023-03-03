#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n =5;
	string cadena="";
	
	for (int i=1;i<=n;i++) {
		cadena= cadena + "*";
		cout<< cadena<<endl;
	}
	return 0;
}

