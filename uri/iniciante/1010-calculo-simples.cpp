#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int cod, quant;
	double valor, total;

	cin >> cod >> quant >> valor;
	total = quant * valor;

	cin >> cod >> quant >> valor;
	total += quant * valor;

	cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " <<  total << "\n";

	return 0;
}
