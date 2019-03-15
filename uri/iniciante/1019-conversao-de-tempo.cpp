#include <iostream>

using namespace std;

int main() {

	int segundos, minutos, horas, resto;
	cin >> segundos;

	resto = segundos % 60;
	minutos = (segundos - resto) / 60;
	segundos = resto;

	resto = minutos % 60;
	horas = (minutos - resto) / 60;
	minutos = resto;

	cout << horas << ":" << minutos << ":" << segundos << endl;

	return 0;
}
