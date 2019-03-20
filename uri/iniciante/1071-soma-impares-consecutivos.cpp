#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, soma = 0;
	cin >> a >> b;

	if (a >= b) {
		for (int i = (b + 1); i < a; i++) {
			if (i % 2 != 0) {
				soma += i;
			}
		}
	}
	else {
		for (int i = (a + 1); i < b; i++) {
			if (i % 2 != 0) {
				soma += i;
			}
		}
	}

	cout << soma << endl;

	return 0;
}
