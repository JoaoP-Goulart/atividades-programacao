#include <iostream>
using namespace std;

bool vogal(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
    int N;
    cin >> N;

    char** matriz = new char*[N];
    for (int i = 0; i < N; i++) {
        matriz[i] = new char[N];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    bool achou = false;
    char sub[2][2]; 

   
    for (int i = 0; i < N - 1 && !achou; i++) {
        for (int j = 0; j < N - 1 && !achou; j++) {
            if (vogal(matriz[i][j]) && vogal(matriz[i][j + 1]) && vogal(matriz[i + 1][j]) & vogal(matriz[i + 1][j + 1])) {
                    
                sub[0][0] = matriz[i][j];
                sub[0][1] = matriz[i][j + 1];
                sub[1][0] = matriz[i + 1][j];
                sub[1][1] = matriz[i + 1][j + 1];
                achou = true;
            }
        }
    }

    
    if (!achou) {
        cout << "submatriz nao encontrada" << endl;
    } else {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << sub[i][j] << " ";
            }
            cout << endl;
        }
    }

    
    for (int i = 0; i < N; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}
