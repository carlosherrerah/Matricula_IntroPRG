#include<iostream>
#include <windows.h>
using namespace std;
HANDLE consola = GetStdHandle(STD_OUTPUT_HANDLE);

void txtColor(string texto, int colorAntes, int colorDespues){
    SetConsoleTextAttribute(consola, colorAntes);
    cout << texto;
    SetConsoleTextAttribute(consola, colorDespues);
}

int fact(int valor){
	int fact = 1;
	for(int i=1; i<=valor; i++){
		fact = fact *i;
	}
	return fact;
}

double permut(int n, int r){
	return fact(n)/fact(n-r);
}

int main(){
	setlocale(LC_ALL, ""); //Para poner acentos
		
	int a, b;
	cout << endl;
	txtColor("Ingresa el valor de n ", 8, 4);
	cin >> a;
	txtColor("Ingresa el valor de r ", 8, 4);
	cin >> b;
	cout << endl;
	
	txtColor("La permutación es: ", 13, 6);
	cout << permut(a, b) << endl<< endl;
	txtColor("", 13, 15);
}

