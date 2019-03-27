#include <iostream>
#include <string>

using namespace std;

int main() {

	string operacao = "";
	float matriz[12][12] = { 0.0 }, soma = 0;
	int lado = 12;
	int divisor = ((lado * lado) - lado) / 2;

	cin >> operacao;
	for (int i = 0; i < lado; i++) {
		for (int j = 0; j < lado; j++) {
			cin >> matriz[i][j];
			if (j > i) {
				soma += matriz[i][j];
			}
		}
	}
	cout.precision(1);
	if (operacao == "S") {
		cout << fixed << soma << endl;
	}
	else if (operacao == "M") {
		cout << fixed << soma / divisor << endl;
	}

	return 0;
}