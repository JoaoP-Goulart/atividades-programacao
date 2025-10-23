
#include <iostream>
 #include <cstring>
 
using namespace std;

int main (){
	int N;
	char letra;
	
	cin >> N;
	
	string* lista= new string[N];

	for(int i=0 ; i < N; i++){
		cin >> lista[i];
	}
	
	cin >> letra;
	int cont=0;
	int m=0;

	
	for(int i=0 ; i < N; i++){
		int TAM= lista[i].size();
		for( int x=0 ; x < TAM; x++){
			
			if( lista[i][x] != letra){
				cont++;
			}
			
		}
		if( cont== TAM){
		m++;
	}
		cont=0;
	}
	
	
	cout << m;
	

	delete [] lista;
	return 0;
}
