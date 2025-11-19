#include <iostream>
#include <string>
using namespace std;

struct Mira {
    string nome;   
    string alvo;   
};

struct Roubo {
    string plano;  
    string nome;   
    int montante;
};

int main() {
    int n;
    cin >> n;

    Mira *miras = new Mira[n];
    for (int i = 0; i < n; i++) {
        cin >> miras[i].nome >> miras[i].alvo;
    }

    int n2;
    cin >> n2;

    Roubo *roubos = new Roubo[n2];
    for (int i = 0; i < n2; i++) {
        cin >> roubos[i].plano >> roubos[i].nome >> roubos[i].montante;
    }

    string busca;
    cin >> busca;

    bool encontrou = false;

    
    for (int i = 0; i < n; i++) {
        if (busca == miras[i].alvo) {
            string ladrao = miras[i].nome;

           
            for (int j = 0; j < n2; j++) {
                if (ladrao == roubos[j].nome) {
                    cout << roubos[j].plano << " " << roubos[j].montante << endl;
                    encontrou = true;
                }
            }
        }
    }

    if (!encontrou) {
        cout << -1 << endl;
    }

    delete[] miras;
    delete[] roubos;
    return 0;
}
