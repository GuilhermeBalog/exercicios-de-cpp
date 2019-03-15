#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int reais = 0, cents = 0;
	int notas[] = { 100, 50, 20, 10, 5, 2 };
	int moedas[] = { 50, 25, 10, 5, 1 };

	scanf("%d.%d", &reais, &cents);

	cout << "NOTAS:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << reais / notas[i] << " nota(s) de R$ " << notas[i] << ".00" << endl;
		reais = reais % notas[i];
	}

	cout << "MOEDAS:" << endl;
	cout << reais << " moeda(s) de R$ 1.00" << endl;

	for (int i = 0; i < 5; i++) {
		cout << cents / moedas[i] << " moeda(s) de R$ 0.";
		if (i > 2)
			cout << "0";
		cout << moedas[i] << endl;
		cents = cents % moedas[i];
	}

	return 0;
}