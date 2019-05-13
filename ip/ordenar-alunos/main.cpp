#include <iostream>
#include <string>

using namespace std;

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct Aluno{
    string nome;
    int nUSP;
    Data dataNascimento;
    Data dataMatricula;
    bool isAmigo;
    int contribuicao;
    int medias[10];
    int mediaFinal;
}Aluno;

Aluno inserirAluno (){
    Aluno alunoExemplo;
    int somaMedias = 0;

    cout << "Nome do aluno:" << endl;
    cin >> alunoExemplo.nome;

    cout << "Numero USP:" << endl;
    cin >> alunoExemplo.nUSP;

    cout << "Data de Nascimento:" << endl;
    cin >> alunoExemplo.dataNascimento.dia >> alunoExemplo.dataNascimento.mes >> alunoExemplo.dataNascimento.ano;

    cout << "Data de Matricula:" << endl;
    cin >> alunoExemplo.dataMatricula.dia >> alunoExemplo.dataMatricula.mes >> alunoExemplo.dataMatricula.ano;

    cout << "E amigo do professor? [1 para SIM, 0 para NAO]" << endl;
    cin >> alunoExemplo.isAmigo;

    cout << "Valor da contribuicao:" << endl;
    cin >> alunoExemplo.contribuicao;

    cout << "Medias do aluno:" << endl;
    for (int i = 0; i < 10; i++){
        cout << "Materia " << i+1 << ":" << endl;
        cin >> alunoExemplo.medias[i];
        somaMedias += alunoExemplo.medias[i];
    }

    alunoExemplo.mediaFinal = somaMedias / 10;

    return alunoExemplo;
}

void ordenaMedias(int* medias){
    int n = 10;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
            if(medias[j] > medias[j+1]){
                int pote = medias[j];
                medias[j] = medias[j+1];
                medias[j+1] = pote;
            }
        }
    }
}

void exibeAluno (Aluno alunoExemplo){
    cout << "Nome do aluno: " << alunoExemplo.nome << endl;

    cout << "Numero USP: " << alunoExemplo.nUSP << endl;

    cout << "Data de Nascimento: ";
    cout << alunoExemplo.dataNascimento.dia << "/" << alunoExemplo.dataNascimento.mes << "/" << alunoExemplo.dataNascimento.ano << endl;

    cout << "Data de Matricula: ";
    cout << alunoExemplo.dataMatricula.dia << "/" << alunoExemplo.dataMatricula.mes << "/" << alunoExemplo.dataMatricula.ano << endl;

    cout << "E amigo do professor? ";
    if(alunoExemplo.isAmigo){
        cout << "Sim" << endl;
    }
    else{
        cout << "Nao" << endl;
    }

    cout << "Valor da contribuicao: " << alunoExemplo.contribuicao << endl;

    cout << "Medias do aluno:";
    ordenaMedias(alunoExemplo.medias);
    for (int i = 0; i < 10; i++){
        cout << alunoExemplo.medias[i] << " ";
    }
    cout << endl;
    cout << "Media Final: " << alunoExemplo.mediaFinal << endl;
}

//Verfica se o aluno 'a' é pior em relação ao aluno 'b';
bool ehPior(Aluno a, Aluno b){
    if(a.contribuicao < b.contribuicao){
        return true;
    }
    else if(a.contribuicao > b.contribuicao){
        return false;
    }
    else{
        if(!a.isAmigo && b.isAmigo){
            return true;
        }
        else if(a.contribuicao && !b.isAmigo){
            return false;
        }
        else{
            if(a.mediaFinal < b.mediaFinal){
                return true;
            }
            else if(a.mediaFinal > b.mediaFinal){
                return false;
            }
            else{
                return a.nUSP < b.nUSP;
            }
        }
    }
}

void ordenaAluno(Aluno* alunos, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
            if(ehPior(alunos[j], alunos[j+1])){
                Aluno pote = alunos[j];
                alunos[j] = alunos[j+1];
                alunos[j+1] = pote;
            }
        }
    }
}

int main(){
    int n;
    cout << "Quantos alunos vai cadastrar? " << endl;
    cin >> n;

    Aluno *alunos = new Aluno[n];

    for (int i = 0; i < n; i++){
        cout << endl << "Inserir o aluno #" << i+1 << endl;
        alunos[i] = inserirAluno();
    }

    ordenaAluno(alunos, n);

    cout << endl << "Ranking dos Alunos pelos criterios 'Freire': " << endl << endl;
    for (int i = 0; i < n; i++){
        cout << "#" << i+1 << endl;
        exibeAluno(alunos[i]);
        cout << endl;
    }

    return 0;
}
