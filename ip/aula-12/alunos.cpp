#include <string>
#include <iostream>

using namespace std;

typedef struct Data {
	int dia, mes, ano;
}Data;

typedef struct Aluno {
	string nomeCompleto;
	int nUsp;
	Data nascimento;
	Data matricula;
	float notas[10];
}Aluno;

Aluno alunos[5];
int indice;

void lerAlunos() {
	int n;
	cin >> n;
	for (indice = 0; indice < n; indice++) {

		getline(cin, alunos[indice].nomeCompleto);
		cin >> alunos[indice].nUsp;

		cin >> alunos[indice].nascimento.dia;
		cin >> alunos[indice].nascimento.mes;
		cin >> alunos[indice].nascimento.ano;

		cin >> alunos[indice].matricula.dia;
		cin >> alunos[indice].matricula.mes;
		cin >> alunos[indice].matricula.ano;

		for (int i = 0; i < 10; i++) {
			cin >> alunos[indice].notas[i];
		}
	}
}

void alunosMatriculadosEm(int ano) {
	int contador = 0;
	for (int i = 0; i < indice; i++) {
		if (alunos[indice].matricula.ano == ano) {
			contador++;
		}
	}
}

int main() {
	lerAlunos();
	alunosMatriculadosEm(2000);
	alunosMatriculadosEm(2015);

	/*
	int n;
	cin >> n;
	Aluno *alunos = new Aluno[n];
	delete[] alunos;
	*/

	return 0;
}