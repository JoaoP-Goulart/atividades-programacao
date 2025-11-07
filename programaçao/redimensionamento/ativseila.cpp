#include <iostream>
using namespace std;

int main(){
    int N, M;

    cin >> N;
    char* v1 = new char[N];
    for(int i=0;i < N;i++){
        cin>>v1[i];
    }

    cin >> M;
    char* v2 = new char[M];
    for(int i=0;i <M;i++){
        cin>>v2[i];
    }

    bool iguais = true;

    if(N == M){
        for(int i = 0; i < N; i++){
            if(v1[i] != v2[i]){
                iguais = false;
            }
        }
    } else {
        iguais = false;
    }

    if(iguais == true){
        cout << "vetores iguais" << endl;
        delete[] v1;
        delete[] v2;
        return 0;
    }

    for(int i=0;i <N;i++){
        bool remover = false;
        int j=0;

        while(j < M and remover == false){
            if(v1[i] == v2[j]){
                remover = true;
            }
            j++;
        }

        if(remover == true){
            char* novo = new char[N-1];

            for(int k = 0;k < i;k++){
                novo[k]=v1[k];
            }

            for(int k = i;k < N-1;k++){
                novo[k]=v1[k+1];
            }

            delete[] v1;
            v1 = novo;
            N--;
            i--;
        }
    }

    for(int i = 0;i < N;i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    delete[] v1;
    delete[] v2;

    return 0;
}
