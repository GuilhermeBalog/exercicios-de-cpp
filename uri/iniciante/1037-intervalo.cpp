#include <iostream>
 
using namespace std;
 
int main() {
 
    double n = 0;
	cin >> n;

	if (n >= 0 && n <= 25)
		cout << "Intervalo [0,25]" << endl;
	else if (n > 25 && n <= 50)
		cout << "Intervalo (25,50]" << endl;
	else if (n > 50 && n <= 75)
		cout << "Intervalo (50,75]" << endl;
	else if (n > 75 && n <= 100)
		cout << "Intervalo (75,100]" << endl;
	else
		cout << "Fora de intervalo" << endl;
		
    return 0;
}