/*
	Exercício 2:
	Ler o nome, primeira nota e segunda nota de três alunos,
	Mostrar a média e a situação APROVADO, RECUPERAÇÃO ou REPROVADO
*/
#include <iostream>
#include <string>

using namespace std;

int ex2()
{
    int i;
    string nome;
    double nota1, nota2, media;

    for(i = 0; i < 3; i++){
        cin >> nome >> nota1 >> nota2;
        media = (nota1 + nota2) / 2;
        cout << "Aluno: " << nome << endl;
        cout << "Média: " << media << endl;
        cout << "Avaliação: ";
        if(media >= 5){
            cout << "APROVADO! \n" << endl;
        }
        else if(media < 5 && media >= 3){
            cout << "RECUPERAÇÃO! \n" << endl;
        }
        else{
            cout << "REPROVADO! \n" << endl;
        }
    }

    return 0;
}

