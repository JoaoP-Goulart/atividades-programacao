#include <iostream>

using namespace std;

struct produto{
    string nome;
    string marca;
    float preco;
};

void mergearray(produto v[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    produto *esq = new produto[n1];
    produto *dir = new produto[n2];

    for (int i = 0; i < n1; i++)
        esq[i] = v[inicio + i];

    for (int j = 0; j < n2; j++)
        dir[j] = v[meio + 1 + j];

    int i = 0, j = 0, k = inicio;

    while (i < n1 && j < n2) {

        if (esq[i].preco < dir[j].preco) {
            v[k++] = esq[i++];
        }
        else if (esq[i].preco > dir[j].preco) {
            v[k++] = dir[j++];
        }
        else {
            if (esq[i].nome <= dir[j].nome){
                v[k++] = esq[i++];
			}
            else{
                v[k++] = dir[j++];
			}
        }
    }

    while (i < n1) v[k++] = esq[i++];
    while (j < n2) v[k++] = dir[j++];

    delete[] esq;
    delete[] dir;
}

void mergesort(produto v[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;

        mergesort(v, inicio, meio);
        mergesort(v, meio + 1, fim);

        mergearray(v, inicio, meio, fim);
    }
}
int main(){
    int n;
    cin >> n;

    produto *v = new produto[n];

    for(int i = 0;i < n;i++){
        cin >> v[i].nome >> v[i].marca >> v[i].preco;
    }

    mergesort(v,0,n-1);

    for(int i = 0;i < n;i++){
    cout <<  v[i].nome << " " << v[i].marca <<" " << v[i].preco << endl;
    }

    delete[] v;
    return 0;
}
