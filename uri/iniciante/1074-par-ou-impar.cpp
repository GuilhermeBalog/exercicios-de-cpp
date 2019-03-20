#include <iostream>

using namespace std;

int main()
{
	int amount = 0, typedValue = 0;

	cin >> amount;
	for (int i = 0; i < amount; i++) {
		cin >> typedValue;
		if (typedValue != 0) {

			if (typedValue % 2 == 0)
				cout << "EVEN ";
			else
				cout << "ODD ";

			if (typedValue > 0)
				cout << "POSITIVE" << endl;
			else
				cout << "NEGATIVE" << endl;
		}
		else {
			cout << "NULL" << endl;
		}
	}

	return 0;
}