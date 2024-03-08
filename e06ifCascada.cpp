#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n = 0, r;
	cout <<"1 es si,  0 es no"<<endl<< endl;

	cout << "Es 1=uno: ";
	cin >> r;
	if (r == 1) {
		n = n + 1;
		cout << "Es 2=dos: ";
		cin >> r;
		if (r == 1 ) {
			n = n + 1;
			cout << "Es 3=Three: ";
			cin >> r;
			if (r == 1 ){
				n++;
			}
		}
	}
	cout <<"\nContestaste: " << n << " bien";
	getchar();
	return 0;
}

