#include <iostream>

using namespace std;


struct nascimento{
	int dia, mes, ano;
};
struct pessoa{
	string nome;
	nascimento nasc;
	
};

int main(){
	int quantidade, pesMaisVelha = 0;
	cin >> quantidade;
	
	pessoa *lista = new pessoa[quantidade];
	
	for(int i = 0; i < quantidade; i++){
		cin >> lista[i].nome >>lista[i].nasc.dia >>lista[i].nasc.mes >>lista[i].nasc.ano;
		
	}
	
	for(int i = 1; i < quantidade; i++){
		if(lista[pesMaisVelha].nasc.ano > lista[i].nasc.ano){
			pesMaisVelha = i;
	}
	else if(lista[pesMaisVelha].nasc.ano == lista[i].nasc.ano){
		if(lista[pesMaisVelha].nasc.mes == lista[i].nasc.mes){
			pesMaisVelha = i;
		}
     else if(lista[pesMaisVelha].nasc.mes == lista[i].nasc.mes){
		if(lista[pesMaisVelha].nasc.dia == lista[i].nasc.dia){
			pesMaisVelha = i;
		}	
	}
}
}

cout << lista[pesMaisVelha].nome << endl;

delete[] lista;
return 0;
}
