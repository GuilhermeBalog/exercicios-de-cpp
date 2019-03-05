#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double perHour;
	cin >> number >> hours >> perHour;
	cout << "NUMBER = " << number << "\n";
	cout << fixed << setprecision(2) << "SALARY = U$ " << (hours * perHour) << "\n";

	return 0;

}
