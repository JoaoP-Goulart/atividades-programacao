#include <iostream>
using namespace std;

int main() {
    int N, M;
   
    cin >> N;
    char* v1 = new char[N];
    for (int i = 0; i < N; i++) {
        cin >> v1[i];
    }

    cin >> M;
    char* v2 = new char[M];
    for (int i = 0; i < M; i++) {
        cin >> v2[i];
    }

    bool iguais = true;

    if (N != M) {
        iguais = false;
    } else {
        for (int i = 0; i < N; i++) {
            if (v1[i] != v2[i]) {
                iguais = false;
            }
        }
    }

    if (iguais) {
        cout << "Vetores iguais";
        delete[] v1;
        delete[] v2;
        return 0;
    }

    for (int i = 0; i < M; i++) {

        bool remover = false;

        for (int j = 0; j < N; j++) {
            if (v2[i] == v1[j]) {
                remover = true;
            }
        }

        if (remover) {
            char* novo = new char[M - 1];

            for (int k = 0; k < i; k++) {
                novo[k] = v2[k];
            }

            for (int k = i; k < M - 1; k++) {
                novo[k] = v2[k + 1];
            }

            delete[] v2;
            v2 = novo;
            M--;    
            i--;  
        }
    }

    for (int i = 0; i < M; i++) {
        cout << v2[i] << " ";
    }

    delete[] v1;
    delete[] v2;
    return 0;
}
