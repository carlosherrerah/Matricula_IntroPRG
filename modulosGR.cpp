#include <iostream>
#include <cmath>
using namespace std;

float g2r(float g){
	float r;
	r = g*3.1416/180;
	return r;
}

float r2g(float r){
	float g;
	g = r*180/3.1416;
	return g;
}
		
int promedio(int a[]){
	
	return 0;
}
		
int main(int argc, char *argv[]) {
	float r;
	float g=30;
	r = g2r(g);
	r = sin(r);
	cout << r << endl;
	
	cout << "aSin" << endl;
	r = 0.5;
	r = r2g(asin(r));
	cout << r;
		
	return 0;
}
		
