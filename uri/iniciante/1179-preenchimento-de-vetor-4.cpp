#include <iostream>

using namespace std;

int main() {

	int par[5] = { NULL }, impar[5] = { NULL }, digitado = 0, contadorPar = 0, contadorImpar = 0;

	for (int i = 0; i < 15; i++) {
		cin >> digitado;

		if (digitado % 2 == 0) {
			for (int c = 0; c < 5; c++) {
				if (par[c] == NULL) {
					par[c] = digitado;
					contadorPar++;
					break;
				}
			}
			if (contadorPar == 5) {
				for (int c = 0; c < 5; c++) {
					cout << "par[" << c << "] = " << par[c] << endl;
					par[c] = NULL;
					contadorPar = 0;
				}
			}
		}
		else {
			for (int c = 0; c < 5; c++) {
				if (impar[c] == NULL) {
					impar[c] = digitado;
					contadorImpar++;
					break;
				}
			}
			if (contadorImpar == 5) {
				for (int c = 0; c < 5; c++) {
					cout << "impar[" << c << "] = " << impar[c] << endl;
					impar[c] = NULL;
					contadorImpar = 0;
				}
			}

		}
	}
	for (int i = 0; i < 5; i++) {
		if (impar[i] != NULL) {
			cout << "impar[" << i << "] = " << impar[i] << endl;
		}
	}
	for (int i = 0; i < 5; i++) {
		if (par[i] != NULL) {
			cout << "par[" << i << "] = " << par[i] << endl;
		}
	}

	return 0;
}