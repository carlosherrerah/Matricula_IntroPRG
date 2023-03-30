#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string texto="universidad";
	
	int len = texto.length();
	cout << texto.substr(6,4) << endl;
	cout << texto.find("sida",0)<< endl;
	cout << texto.replace(6,4, "vih")<< endl;
		
	return 0;
}

