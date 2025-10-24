#include <iostream>
using namespace std;


int BuscaBinariaDecrescente(int v[], int inicio, int fim, int procurado) {
    if (inicio > fim) {
        return -1; 
    }

    int meio = (inicio + fim) / 2;

    if (v[meio] == procurado) {
        return meio;
    } 
    else if (v[meio] < procurado) {
        
        return BuscaBinariaDecrescente(v, inicio, meio - 1, procurado);
    } 
    else {
        
        return BuscaBinariaDecrescente(v, meio + 1, fim, procurado);
    }
}

int main() {
    int N;
    cin >> N;

    int* v = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int procurado;
    cin >> procurado;

    cout << BuscaBinariaDecrescente(v, 0, N - 1, procurado) << endl;

    delete[] v;
    return 0;
}
