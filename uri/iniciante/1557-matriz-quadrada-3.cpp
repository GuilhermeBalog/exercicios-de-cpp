#include <iomanip>
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

int main() {

	int medida = 0, maior = 1, tamanho = 1;

	cin >> medida;
	while (medida != 0) {
		maior = (int)pow(2, 2 * (medida - 1));
		tamanho = to_string(maior).length();

		for (int i = 0; i < medida; i++) {
			for (int c = 0; c < medida; c++) {
				cout << right << setw(tamanho) << (long)pow(2, (c + i));
				if (c != (medida - 1)) {
					cout << " ";
				}
			}
			cout << endl;
		}
		cout << endl;
		cin >> medida;
	}

	return 0;
}