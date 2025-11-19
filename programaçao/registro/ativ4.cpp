#include <iostream>
#include <string>
using namespace std;

struct pessoa{
    int matricula;
    string nome;
    float n1;
    float n2;
    char sexo;
};




int main(){
    int N;
    cin >> N;
    pessoa *aluno = new pessoa[N];

    for(int i =0;i < N;i++){
        cin >> aluno[i].matricula >> aluno[i].nome 
        >> aluno[i].n1 >> aluno[i].n2 >> aluno[i].sexo;
    }

    float sg = 0;
    for(int i = 0;i < N;i++){
        sg += aluno[i].n1+aluno[i].n2;
    }

    sg = sg/(N*2);
    cout <<  sg << endl;

    sg = 0;
    int cont = 0;

    for(int i = 0;i < N;i++){
        if(aluno[i].sexo == 'M'){
            cont++;
            sg += aluno[i].n1+aluno[i].n2;
        }
    }
        
    sg = sg/(cont*2);
    cout << sg << endl;
    sg = 0;
    cont = 0;

    for(int i = 0;i < N;i++){
        if(aluno[i].sexo == 'F'){
            cont++;
            sg += aluno[i].n1+aluno[i].n2;
        }
        }

         sg = sg/(cont*2);
    cout << sg << endl;
    sg = 0;

    delete[] aluno;
    return 0;
}
