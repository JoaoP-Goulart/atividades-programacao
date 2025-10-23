#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    string* lista = new string[N];
    
    for (int i = 0; i < N; i++) {
        cin >> lista[i];
    }
    
    char letra;
    cin >> letra;
    
    int qntSemLetra = 0; 
    
    for (int i = 0; i < N; i++) {
        bool temLetra = false; 
        for (size_t j = 0; j < lista[i].size(); j++) {
            if (lista[i][j] == letra) {
                temLetra = true; 
                break; 
            }
        }
        
        if (!temLetra) {
            qntSemLetra++;
        }
    }
    
    cout << qntSemLetra << endl;

    delete[] lista;
    return 0;
}
