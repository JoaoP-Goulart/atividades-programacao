#include <iostream>
#include <string>
using namespace std;

struct necessario{
    string nome;
    int quantNecessaria;
};

struct prof{
    string nome;
    string aliment1;
    int quant1;
    string aliment2;
    int quant2;
};

int main(){
    int N1;
    cin >> N1;

    necessario *Vn = new necessario[N1];

    for(int i = 0;i < N1;i++){
        cin >> Vn[i].nome >>  Vn[i].quantNecessaria;
    }

    int N2;
    cin >> N2;

    prof *Vr = new prof[N2];

    for(int i = 0;i < N2;i++){
        cin >> Vr[i].nome >>  Vr[i].aliment1 >> Vr[i].quant1 >> Vr[i].aliment2 >> Vr[i].quant2;
    }

     for(int i = 0;i < N1;i++){
        int soma = 0;
        for(int j = 0;j < N2;j++){
            if(Vn[i].nome == Vr[j].aliment1){
            soma += Vr[j].quant1;
            }
            if(Vn[i].nome == Vr[j].aliment2){
            soma += Vr[j].quant2;
            }
        }
        soma = Vn[i].quantNecessaria - soma;
        cout <<  Vn[i].nome << " " << soma << endl;
    }

return 0;
}
