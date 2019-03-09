/*
	Exercício 3:
	Ler o nome, primeira nota e segunda nota de três alunos,
	Mostrar a média e a avaliação A, B, C, D ou R
*/
#include <iostream>
#include <string>

using namespace std;

int ex3()
{
    int i;
    string nome, nota;
    double nota1, nota2, media;

    for(i = 0; i < 3; i++){
        cin >> nome >> nota1 >> nota2;
        media = (nota1 + nota2) / 2;
        cout << "Aluno: " << nome << endl;
        cout << "Média: " << media << endl;
        cout << "Nota: ";

        if(media >= 9){
            cout << "A\n" << endl;
        }
        else if(media >= 7 && media < 9){
            cout << "B\n" << endl;
        }
        else if(media >= 5 && media < 7){
            cout << "C\n" << endl;
        }
        else if(media >= 3 && media < 5){
            cout << "D\n" << endl;
        }
        else{
            cout << "R\n" << endl;
        }
    }

    return 0;
}


