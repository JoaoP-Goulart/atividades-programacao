#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	string* lista = new string[N];
	
	for(int i = 0;i < N;i++){
		cin >> lista[i];
	}
	
	char letra;
	cin >> letra;
	
	string mpalavra;
	
	int maxcont = -1;
	
	for(int i = 0;i < N;i++){
		int cont = 0;
		for (size_t j = 0; j < lista[i].size(); j++) {
			if(lista[i][j] == letra){
				cont++;
			}	
			}
			if(cont >= maxcont){
				maxcont = cont;
				mpalavra = lista[i];
		}
	}
		cout << mpalavra;
	
   delete[] lista;
    return 0;
}
