#include <iostream>
#include <cstdlib>
#define maxf 3
#define maxc 3
using namespace std;
int main(int argc, char* argv[])
{
	float a[maxf][maxc];
	int f, c;
	//leer el array
	for (f = 0;f < maxf;f++) {
		for (c = 0; c < maxc;c++) {
			cout << "ingrese los elementos del array: ";
			cin >> a[f][c];
		}
	}
	//escribir el array
	cout << "Impresion de valores ingeresados" << endl;
	for (f = 0;f < maxf;f++) {
		for (c = 0;c < maxc; c++) {
			cout << a[f][c];
			cout << " ";
			//cout << endl; 
		}
		cout << endl;
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}