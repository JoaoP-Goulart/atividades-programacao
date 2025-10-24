#include <iostream>
#include <string>
using namespace std;

int main() {
	int l=4;
	int c=4;
	float m[l][c];
	
	for(int i = 0;i < l;i++){
		for(int j = 0;j < c;j++){
			cin >> m[i][j];
		}
	}
		
		int N;
		cin >> N;
		
		int v[N];
		
		for(int i = 0;i < N;i++){
			cin >> v[i];
		}
		
		float soma = 0;
		int origem = 0;
		int destino = 0;
		
		for(int i = 0;i < N - 1;i++){
			origem = v[i];
			destino = v[i+1];
			
			soma += m[origem][destino];
		}
		
		
		cout << soma << endl;	
		
 
    return 0;
}
