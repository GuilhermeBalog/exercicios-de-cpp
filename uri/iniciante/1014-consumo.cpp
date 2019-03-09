#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int km;
	float litro;
	cin >> km >> litro;
	cout << fixed << setprecision(3) << km / litro << " km/l\n";

	return 0;
}
