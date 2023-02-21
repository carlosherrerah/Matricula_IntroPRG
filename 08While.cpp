#include <iostream>
using namespace std;

int main() {
	int i=1, n, r;
	
	cout << "Ingresa la tabla: " ;
	cin >> n;
	while(i <= 10){
		r = n*i;
		cout<<n<<" X "<<i<<" = "<<r<<endl;
		i=i+1;
	}
	cout<<endl<<endl;
	i = 10;
	while(i >= 1) {
		r = n*i;
		cout<<n<<" X "<<i<<" = "<<r<<endl;
		i--;
	}
	
	getchar();
	return 0;
}

