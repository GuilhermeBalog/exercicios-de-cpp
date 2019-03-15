#include <iostream>
 
using namespace std;
 
int main() {
 
    float n1 = 0, n2 = 0, n3 = 0, n4 = 0, nExame = 0, media = 0;
	cout.precision(1);
	cin >> n1 >> n2 >> n3 >> n4;

	media = (2 * n1 + 3 * n2 + 4 * n3 + n4) / 10;
	cout << "Media: " << fixed << media << endl;

	if (media >= 7.0)
		cout << "Aluno aprovado." << endl;
	else if (media < 5)
		cout << "Aluno reprovado." << endl;
	else {
		cout << "Aluno em exame." << endl;
		
		cin >> nExame;
		cout << "Nota do exame: " << fixed << nExame << endl;
		media = (media + nExame) / 2;

		if (media >= 5)
			cout << "Aluno aprovado." << endl;
		else
			cout << "Aluno reprovado." << endl;

		cout << "Media final: " << fixed << media << endl;
	}
 
    return 0;
}