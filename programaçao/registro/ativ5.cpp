#include <iostream>
#include <string>
using namespace std;

struct politico{
    string partido;
    string nome;   
};

struct Roubo{
    string operacao;  
    string nome;   
    int montante;
};

int main() {
    int n;
    cin >> n;

    politico *politicos = new politico[n];
    for (int i = 0; i < n; i++) {
        cin >> politicos[i].partido >> politicos[i].nome;
    }

    int n2;
    cin >> n2;

    Roubo *roubos = new Roubo[n2];
    for (int i = 0; i < n2; i++) {
        cin >> roubos[i].operacao >> roubos[i].nome >> roubos[i].montante;
    }

    string procurado;
    cin >> procurado;

    string busca;
    cin >> busca;

    int soma =0;

    string nomePolitico;

    
    for(int i = 0; i < n;i++){
        if(politicos[i].partido == procurado){
            nomePolitico = politicos[i].nome;
    for (int j = 0; j < n2; j++) {
        if(busca == roubos[j].operacao and nomePolitico == roubos[j].nome){
                soma += roubos[j].montante;
            }
            }
        }
    }
    


    cout << soma << endl;


    delete[] politicos;
    delete[] roubos;
    return 0;
}
