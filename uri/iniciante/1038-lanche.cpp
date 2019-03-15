#include <iostream>
 
using namespace std;
 
int main() {
 
    int cd = 0, qt = 0;
	float precos[] = { 4.0, 4.5, 5.0, 2.0, 1.5 };
	cin >> cd >> qt;

	cout.precision(2);
	cout << "Total: R$ " << fixed << precos[cd - 1] * qt << endl;
 
    return 0;
}