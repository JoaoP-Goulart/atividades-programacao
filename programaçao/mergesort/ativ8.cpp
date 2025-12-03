#include <iostream>

using namespace std;

struct funcionario{
    int identificador;
    float horas;
    float preco;
    float salario;
};

void conta(funcionario v[], int n){
    for(int i = 0;i < n;i++){
        v[i].salario = v[i].horas * v[i].preco;
    }
}

void mergearray(funcionario v[],int inicio,int meio,int fim){
    int n1 = (meio+1) - inicio;
    int n2 = fim - meio;

    funcionario *esq = new funcionario[n1];
    funcionario *dir = new funcionario[n2];

    for(int i = 0;i < n1;i++){
        esq[i] = v[inicio+i];
    }
    for(int j = 0;j < n2;j++){
        dir[j] = v[meio+1+j];
    }

    int i = 0, j = 0,k = inicio;

    while(i < n1 && j < n2){
        if(esq[i].salario <= dir[j].salario){
            v[k++] = esq[i++];
        }
        else{
            v[k++] = dir[j++];
        }
    }

    while(i < n1){
        v[k++] = esq[i++];
    }
    while(j < n2){
        v[k++] = dir[j++];
    }

    delete[] esq;
    delete[] dir;
}

void mergesort(funcionario v[],int inicio,int fim){
    if(inicio < fim){
        int meio = (inicio+fim)/2;

        mergesort(v,inicio,meio);
        mergesort(v,meio+1,fim);
        mergearray(v,inicio,meio,fim);
        
    }
}

int main(){
	int cont = 0;
    funcionario v[100];

    int id;
    cin >> id;

    while (id != -1 && cont < 100) {

        v[cont].identificador = id;
        cin >> v[cont].horas >> v[cont].preco;
        cont++;

        cin >> id;   // lê o próximo identificador
    }

    conta(v,cont);

    mergesort(v,0,cont-1);

    for(int i = 0;i < cont;i++){
        cout <<  v[i].identificador <<  " " << v[i].salario << endl;
    }

    return 0;
}
