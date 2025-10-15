#include <iostream>
#include <string>
using namespace std;

int main() {
	string P;
	cin >> P;
	
	int N;
	cin >> N;
	
	string* lista = new string[N];
	
	for(int i = 0;i < N;i++){
		cin >> lista[i];
	}
	
	int cont = -1;

	string palavra = " ";
	
	for(int i = 0;i < N; i++){
		int rep = 0;
		for(int j = 0;j < 5;j++){
		if(lista[i][j] == P[j]){
			rep++;
		}
		if(rep >= cont){
			cont = rep;
			palavra = lista[i];
		}
	}
	}
	cout << palavra;
	
	
   delete[] lista;
    return 0;
}
