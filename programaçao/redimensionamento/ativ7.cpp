#include <iostream>

using namespace std;

int main(){
    int A = 10;

    int *v = new int[A];

    for(int i = 0;i < A;i++){
        cin >> v[i];
    }

    for(int i = 0;i < A;i++){
        if(v[i] <= 0){
            A--;
            int *novo = new int[A];

            for(int k = 0;k < i;k++){
                novo[k] = v[k];
            }
            for(int k = i;k < A;k++){
                novo[k] = v[k+1];
            }

            delete[] v;
            v = novo;
            i--;
        }
    }

    for(int i = 0;i < A;i++){
        cout << v[i] << " ";
    }

    delete[] v;
    return 0;
}