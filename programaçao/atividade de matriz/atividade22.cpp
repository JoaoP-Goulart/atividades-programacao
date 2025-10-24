#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* v = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int procurado;
    cin >> procurado;

    int posi = 0;
    int posf = N - 1;
    int meio;
    

    while (posi <= posf) {
        meio = (posi + posf) / 2;
        cout << v[meio] << " ";

        if (v[meio] == procurado) {
            break; 
        } 
        else if (procurado > v[meio]) {
            posi = meio + 1;
        } 
        else {
            posf = meio - 1;
        }
    }

    
    

    delete[] v;
    return 0;
}
