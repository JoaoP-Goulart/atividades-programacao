#include <iostream>

using namespace std;

int *aumentar(int v[], int &capacidade){
    int novaCap = capacidade + 5;

    int *novo = new int[novaCap];

    for(int k = 0;k < capacidade;k++){
        novo[k] = v[k];
    }

    delete[] v;
    capacidade = novaCap;

    return novo;
}

int main(){
    int capacidade = 5;
    int inseridos = 0;
    int aumento = 0;

    int *v = new int[capacidade];

    int n;

    cin >> n;

    int i = 0;

    while(i < capacidade and n != 0){
        
        if(inseridos == capacidade){
            v = aumentar(v,capacidade);
            aumento++;
        }
    
        v[inseridos] = n;
        inseridos++;
        cin >> n;
    }

    for(int i = 0;i < inseridos;i++){
        cout << v[i] << " ";
    }

    cout << endl;

    cout << capacidade << endl;

    cout << aumento;

    delete[] v;
    return 0;
}