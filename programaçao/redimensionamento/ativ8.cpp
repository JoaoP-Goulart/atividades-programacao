#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	string *v = new string[N];
	
	for(int i =0; i< N; i++){
		cin >> v[i];
	}
	
	
	for(int i = 0;i< N;i++){
		for(int j = i+1;j < N;j++){
			if(v[i] == v[j]){
				N--;
				string *novo = new string[N];
				for(int k = 0;k < j;k++){
					novo[k] = v[k];
				}
				for(int k = j;k < N;k++){
					novo[k] = v[k+1];
				}
				delete[] v;
				v = novo;
				
				j--;
			}
		}
	}
	cout << N << endl;
	
	for(int i = 0;i<N;i++){
		cout << v[i] << endl;
	}
	
		delete[] v;
		return 0;
	
		}
