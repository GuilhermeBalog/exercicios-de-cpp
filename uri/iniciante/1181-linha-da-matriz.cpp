#include <string>
#include <iostream>

using namespace std;

int main()
{
	float matriz[12][12]{ 0.0 };
	int linha = 0, soma = 0;
	string operacao;

	cin >> linha >> operacao;

	for (int i = 0; i < 12; i++) {
		for (int c = 0; c < 12; c++) {
			cin >> matriz[i][c];
			if (i == linha) {
				soma += matriz[i][c];
			}
		}
	}

	if (operacao == "S") {
		cout << fixed << soma << endl;
	}
	else if (operacao == "M") {
		cout.precision(1);
		cout << fixed << soma / 12.0 << endl;
	}

	return 0;
}