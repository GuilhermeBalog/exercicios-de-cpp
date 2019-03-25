#include <iostream>

using namespace std;

int main() {

	int linhas = 0, colunas = 0, xSabre = 0, ySabre = 0;
	cin >> linhas >> colunas;

	//declarando a matriz
	int** matriz = (int**)malloc(sizeof(int*) * linhas);
	for (int i = 0; i < linhas; i++)
		matriz[i] = (int*)malloc(sizeof(int) * colunas);

	//Usuário digita 0 ou 1 pra cada célula
	for (int i = 0; i < linhas; i++) {
		for (int j = 0; j < colunas; j++) {
			cin >> matriz[i][j];
		}
	}

	//lendo a matriz digitada
	for (int i = 0; i < linhas; i++) {
		for (int j = 0; j < colunas; j++) {
			if (matriz[i][j] == 42) {
				if (i != 0 && j != 0 && i != (linhas - 1) && j != (colunas - 1)) {
					int cimaEsquerda = matriz[i - 1][j - 1];
					int cimaCentro = matriz[i - 1][j];
					int cimaDireita = matriz[i - 1][j + 1];

					int esquerda = matriz[i][j - 1];
					int direita = matriz[i][j + 1];

					int baixoEsquerda = matriz[i + 1][j - 1];
					int baixoCentro = matriz[i + 1][j];
					int baixoDireita = matriz[i + 1][j + 1];

					if (cimaEsquerda == 7 && cimaCentro == 7 && cimaDireita == 7 && esquerda == 7 && direita == 7 && baixoEsquerda == 7 && baixoCentro && baixoDireita == 7) {
						xSabre = i + 1;
						ySabre = j + 1;
					}
				}
			}
		}
	}

	cout << xSabre << " " << ySabre << endl;

	//liberando a matriz
	for (int i = 0; i < linhas; i++)
		free(matriz[i]);
	free(matriz);

	return 0;
}