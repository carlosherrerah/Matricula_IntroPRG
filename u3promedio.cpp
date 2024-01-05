#include <iostream>
using namespace std;

float promedio(float datos[], int n) {
	float suma=0, prom;
	for(int i=0; i < n; i++){
		suma = suma + datos[i];
	}
	prom = suma / n;
	return prom;
}

int main(int argc, char *argv[]) {
	int v[]={8, 3, 9, 7, 5, 6, 5, 10, 9, 10};      // par o impar
	// int v[]={8, -8, 9, 7, -5, 6, 5, 10, -9, -10};  // + o -
	float p[10]={0};
	float n[10]={0};
	int x=0, y=0;
	float prom = 0;

	for (int i=0; i <10; i++) {
		if (v[i] % 2 == 0 ) {  // par o impar
        // if (v[i] > 0) {  // + o -
			p[x]= v[i];
			x=x+1;
		} else {
			n[y] = v[i];
			y=y+1;
		}
	}
	prom = 0;
	cout << promedio(p, x)<< endl;
	cout << promedio(n, y)<< endl;
	getchar();
	return 0;
}

