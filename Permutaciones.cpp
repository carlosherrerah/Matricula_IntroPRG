#include<iostream>
using namespace std;

int factorial(int valor){
	int fact = 1;
	for(int i=1; i<=valor; i++){
		fact = fact *i;
	}
	return fact;
}

double permutacion(int n, int r){
	return factorial(n)/factorial(n-r);
}

int main(){
	int n, r;
	cout << "endl;
	cin >> n;
	cin >> r;
	cout << endl;
	
	cout << permutacion(n, r) << endl<< endl;
}

