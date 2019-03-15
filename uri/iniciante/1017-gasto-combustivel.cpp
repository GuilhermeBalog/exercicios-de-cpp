#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float tempo, vm, distancia;
	cin >> tempo >> vm;
	distancia = tempo * vm;
	cout << fixed << setprecision(3) << distancia / 12 << endl;

	return 0;
}