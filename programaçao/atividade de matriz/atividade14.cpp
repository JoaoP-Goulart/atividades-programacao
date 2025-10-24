#include <iostream>
#include <string>
using namespace std;

int BuscaBinaria(int v[],int inicio,int fim,int procurado){
	
		int meio = (inicio+fim)/2;
		if(v[meio] == procurado){
			return meio;
		}
		else if( v[meio] > procurado){
			return BuscaBinaria(v,meio+1,fim,procurado);
		}
		else{
			return BuscaBinaria(v,inicio,meio-1,procurado);
		}
	
			return -1;
		}


int main() {
	
	int N;
	cin >> N;
	
	int* v = new int[N];
	
	for(int i = 0;i < N;i++){
		cin >> v[i];
	}
	
	int procurado;
	cin >> procurado;
	
	cout << BuscaBinaria(v,0,N-1,procurado) << endl;
	
	
    delete[] v;
    return 0;
}
