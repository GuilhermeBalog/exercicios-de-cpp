#include <iostream>

using namespace std;

int main()
{
	int n = 0, qtIn = 0, qtOut = 0, digitado = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> digitado;
		if (digitado >= 10 && digitado <= 20)
			qtIn++;
		else
			qtOut++;
	}

	cout << qtIn << " in" << endl;
	cout << qtOut << " out" << endl;

	return 0;
}
