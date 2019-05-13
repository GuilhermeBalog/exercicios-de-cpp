#include <iostream>

using namespace std;

int main()
{
	int linhas = 0, colunas = 0;

	while (cin >> linhas) {
		cin >> colunas;

		//declarando a matriz
		int** matriz = (int**)malloc(sizeof(int*) * linhas);
		for (int i = 0; i < linhas; i++)
			matriz[i] = (int*)malloc(sizeof(int) * colunas);

		//Usu�rio digita 0 ou 1 pra cada c�lula
		for (int i = 0; i < linhas; i++) {
			for (int j = 0; j < colunas; j++) {
				cin >> matriz[i][j];
			}
		}

		//lendo a matriz digitada
		for (int i = 0; i < linhas; i++) {
			for (int j = 0; j < colunas; j++) {
				if (matriz[i][j] == 1)
					cout << "9";
				else {
					int total = 0;

					//Se n�o for a primeira linha
					if (i != 0) {
						//olha em cima (linha atual - 1) 
						total += matriz[i - 1][j];
					}

					//Se n�o for a �ltima linha
					if (i != (linhas - 1)) {
						//olha em baixo (linha atual + 1)
						total += matriz[i + 1][j];
					}

					//Se n�o for a primeira coluna
					if (j != 0) {
						//olha pra esquerda (coluna atual - 1)
						total += matriz[i][j - 1];
					}

					//Se n�o for a �ltima coluna
					if (j != (colunas - 1)) {
						//olha pra direita (coluna atual + 1)
						total += matriz[i][j + 1];
					}

					cout << total;

				}
			}

			cout << endl;
		}

		//liberando a matriz
		for (int i = 0; i < linhas; i++)
			free(matriz[i]);
		free(matriz);
	}

	return 0;
}
