#include <iostream>
using namespace std;

string ParImpar(int n){
	string r;
	if (n % 2 == 0) {
		r = "par";
	} else {
		r = "impar";
	}
	return r;
}
	/*
	bool esPar(int x) {
	bool r;
	if (x % 2 == 0)
	r = 1;
	else
	r = false;
	return r;
	}
	*/
	/*
	bool esPar(int x) {
	bool r=false;
	if (x % 2 == 0)
	r = true;
	return r;
	}
	*/
	bool esPar(int x) {
		return  (x % 2 == 0);
	}
	
	int main(int argc, char *argv[]) {
		int n = 5;
		for (int i=1;i<= 10;i++) {
			if (!esPar(i)) {
				cout<<n<<" X "<<i<<" = "<<n*i<<endl;
			}
		}
		
		return 0;
	}
	
	cmath
	g2r
	r2g
	grados = 30
	sin(30) = 0.5
	
	x = 0.5
	asin(	
