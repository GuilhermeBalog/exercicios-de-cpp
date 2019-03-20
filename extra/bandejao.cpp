#include <iostream>

using namespace std;

int main()
{
	float valor = 0;
	int valorInteiro = 0;

	cin >> valor;
	valorInteiro = valor * 100;

	cout << valorInteiro / 200 << " bandeco(s)" << endl;
	valorInteiro = valorInteiro % 200;

	cout << valorInteiro / 50 << " cafe(s)" << endl;
	valorInteiro = valorInteiro % 50;

	cout << "E sobram " << valorInteiro << " centavos" << endl;

	return 0;
}
