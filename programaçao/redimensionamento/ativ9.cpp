#include <iostream>
using namespace std;

int main(){
	int N = 10;
	
	int *v = new int[N];
	
	for(int i =0; i< N; i++){
		cin >> v[i];
	}
	
	int red = 0;
	
	for(int i = 0;i< N;i++){
		if(v[i]%5 == 0){
			red++;
			N--;
			int *novo = new int[N];
			for(int k = 0;k < i;k++){
				novo[k] = v[k];
			}
			for(int k = i;k <N;k++){
				novo[k] = v[k+1];
			}
			
			delete[] v;
			v = novo;
			i--;
		}
	}
		
		for(int i = 0;i < N;i++){
			cout << v[i] << " ";
		}
		cout << endl << red;
		
		delete[] v;
		return 0;
	
		}
