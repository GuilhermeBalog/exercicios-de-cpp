#include <iostream>

using namespace std;

int main()
{
	int cases = 0, index = 0;
	unsigned long long fibonacci[65] = { 0 };

	//define os primeiros termos da sequência
	fibonacci[0] = 0;
	fibonacci[1] = 1;

	//cria o resto da sequência
	for (int i = 2; i < 65; i++)
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> index;
		cout << "Fib(" << index << ") = " << fibonacci[index] << endl;
	}

	return 0;
}
