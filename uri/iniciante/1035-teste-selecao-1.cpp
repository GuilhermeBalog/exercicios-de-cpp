#include <iostream>
 
using namespace std;
 
int main() {
 
    int A = 0, B = 0, C = 0, D = 0;
	cin >> A >> B >> C >> D;

	if (B > C && D > A && (C + D) > (A + B) && C >= 0 && D >= 0 && A % 2 == 0)
		cout << "Valores aceitos" << endl;
	else
		cout << "Valores nao aceitos" << endl;
 
    return 0;
}