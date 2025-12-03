#include <iostream>

using namespace std;

struct aluno{
    int matricula;
    float d[6];
    float CRA;
};

aluno *aumentar(aluno v[], int &N){
    int novaN = N + 1;

    aluno *nova = new aluno[novaN];

    for(int i=0; i < N;i++){
        nova[i] = v[i];
    }
    delete[] v;
    N = novaN;
    return nova;
}

void ordenar(aluno v[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < N; j++) {
            if (v[j].matricula < v[menor].matricula) {
                menor = j;
            }
        }
        aluno temp = v[i];
        v[i] = v[menor];
        v[menor] = temp;
    }
}


int buscabinaria(aluno v[],int N, int procurado, int &comparacoes){
    int inicio = 0;
    int fim = N-1;

     while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        comparacoes++;

        if (v[meio].matricula == procurado)
            return meio;

        if (procurado < v[meio].matricula)
            fim = meio - 1;
        else
            inicio = meio + 1;
    }

    return -1;
}

float calculaCRA(aluno a) {
    int C[6] = {4, 2, 3, 6, 2, 4};

    float soma = 0, somaC = 0;
    for (int i = 0; i < 6; i++) {
        soma += a.d[i] * C[i];
        somaC += C[i];
    }

    return soma / somaC;
}



int main(){
    int N = 2;
    int quantidade = 0;

    aluno *v = new aluno[N];

   int mat;
   cin >> mat; 

while (mat >= 0) { 

    if (quantidade == N)
        v = aumentar(v, N);

    v[quantidade].matricula = mat;

    for (int i = 0; i < 6; i++) {
        cin >> v[quantidade].d[i];
    }

    v[quantidade].CRA = calculaCRA(v[quantidade]);

    quantidade++;

    cin >> mat;
}

    ordenar(v,N);

    int procurado;

    cin >> procurado;

    int comparacoes = 0;

    int pos;

    pos = buscabinaria(v,N,procurado,comparacoes);

    cout << v[pos].CRA << endl;
    cout << comparacoes << endl;

    
    delete[] v;
    return 0;
}
