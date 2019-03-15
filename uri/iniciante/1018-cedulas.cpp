#include <iostream>

using namespace std;

int main() {

	int valor, resto;
	cin >> valor;
	cout << valor << endl;

	resto = valor % 100;
	cout << (valor - resto) / 100 << " nota(s) de R$ 100,00" << endl;
	valor -= valor - resto;

	resto = valor % 50;
	cout << (valor - resto) / 50 << " nota(s) de R$ 50,00" << endl;
	valor -= valor - resto;

	resto = valor % 20;
	cout << (valor - resto) / 20 << " nota(s) de R$ 20,00" << endl;
	valor -= valor - resto;

	resto = valor % 10;
	cout << (valor - resto) / 10 << " nota(s) de R$ 10,00" << endl;
	valor -= valor - resto;

	resto = valor % 5;
	cout << (valor - resto) / 5 << " nota(s) de R$ 5,00" << endl;
	valor -= valor - resto;

	resto = valor % 2;
	cout << (valor - resto) / 2 << " nota(s) de R$ 2,00" << endl;
	valor -= valor - resto;

	resto = valor % 1;
	cout << (valor - resto) / 1 << " nota(s) de R$ 1,00" << endl;
	valor -= valor - resto;

	return 0;
}