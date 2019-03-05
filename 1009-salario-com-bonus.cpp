#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	string name;
	double salary, sales;
	
	cin >> name >> salary >> sales;
	cout << fixed << setprecision(2) << "TOTAL = R$ " <<  salary + (sales * 0.15) << "\n";

	return 0;

}
