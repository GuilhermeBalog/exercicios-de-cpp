#include <iostream>

using namespace std;

int maior(int a, int b) {
	int m = a > b ? a : b;
	return m;
}

void printElogio(char nota) {
	switch (nota) {
	case 'A':
		cout << "Excelente!" << endl;
		break;
	case 'B':
		cout << "Muito Bom!" << endl;
		break;
	case 'C':
		cout << "Bom" << endl;
	default:
		cout << "Não desista!" << endl;
	}
}

char convertNota(float media) {
	if (media <= 10 && media > 8) {
		return 'A';
	}
	else if (media <= 8 && media > 6) {
		return 'B';
	}
	else if (media <= 6 && media > 4) {
		return 'C';
	}
	else if (media <= 4 && media > 2) {
		return 'D';
	}
	else if (media <= 2 && media >= 0) {
		return 'E';
	}
	else {
		return 'R';
	}
}

int main()
{
	int primeiraNota, segundaNota;
	float media;
	char notaFinal;

	cin >> primeiraNota >> segundaNota;
	media = (primeiraNota + segundaNota) / 2;

	notaFinal = convertNota(media);
	cout << "Sua nota final foi: " << notaFinal << endl;
	cout << "Sua maior nota foi: " << maior(primeiraNota, segundaNota) << endl;
	printElogio(notaFinal);

	return 0;
}