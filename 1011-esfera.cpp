#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	double r;
	cin >> r;
	cout << fixed << setprecision(3) << "VOLUME = " << (4 / 3.0) * 3.14159 * pow(r, 3) << "\n";

	return 0;
}
