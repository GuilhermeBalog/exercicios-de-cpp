#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	double r;
	cin >> r;
	cout << fixed << setprecision(4) << "A=" << 3.14159 * (r * r) << "\n";

	return 0;
}