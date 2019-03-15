#include <iostream>
 
using namespace std;
 
int main() {
 
    int valor = 0, maior = 0, posicao = 0;

    for(int i = 1; i <= 100; i++){
        cin >> valor;
        if(valor > maior){
            maior = valor;
            posicao = i;
        }
    }
    cout << maior << endl;
    cout << posicao << endl;
 
    return 0;
}