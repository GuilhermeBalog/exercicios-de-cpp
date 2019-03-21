#include <iostream>

using namespace std;

int main()
{
	int typedValues[20] = { 0 }, newArray[20] = { 0 };

	for (int i = 0; i < 20; i++) {
		//User types a values to typedValues[i]
		cin >> typedValues[i];

		//the typed value is inserted in newArray at the reverse position
		newArray[(19 - i)] = typedValues[i];
	}

	for (int i = 0; i < 20; i++)
		cout << "N[" << i << "] = " << newArray[i] << endl; //N[i] = y

	return 0;
}