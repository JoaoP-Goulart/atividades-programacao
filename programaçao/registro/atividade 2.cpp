#include <iostream>
using namespace std;


struct crianca{
	string nome;
	string brinquedo;
};

struct nomebrinquedo{
	string nomebrinq;
	int quantidade;
	int quantidadepedida;
};
	
	

int main() {
	int cartas;
	cin >> cartas;
	
	crianca *lista = new crianca[cartas];
	
	for(int i = 0;i < cartas;i++){
		cin >> lista[i].nome >> lista[i].brinquedo;
	}
	
	int quantbon;
	cin >> quantbon;
	
	nomebrinquedo *lista2 = new nomebrinquedo[quantbon];
	
	for(int i = 0; i < quantbon;i++){
		cin >> lista2[i].nomebrinq >> lista2[i].quantidade;
		lista2[i].quantidadepedida = 0;
		
	}
	
	for (int i = 0; i < cartas; i++) {
        for (int j = 0; j < quantbon; j++) {
            if (lista[i].brinquedo == lista2[j].nomebrinq) {
                lista2[j].quantidadepedida++;
			}
		}
	}
	for(int x = 0;x< quantbon;x++){
		if(lista2[x].quantidadepedida > lista2[x].quantidade){
			cout << lista2[x].nomebrinq << " ";
		}
	}
 
 
 delete[] lista;
 delete[] lista2;
	
    
    return 0;
}
