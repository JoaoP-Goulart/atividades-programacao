#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	int* v = new int[N];
	
	for(int i = 0;i < N;i++){
		cin >> v[i];
	}
	
	int n1, n2;
	cin >> n1 >> n2;
	
	int i1,i2;
	
	for(int i = 0; i < N; i++){
	if(v[i] == n1){
		i1 = i;
	}
	if(v[i] == n2){
		i2 = i;
	}
}
int inicio = min(i1,i2)+1;
int fim = max(i1,i2)-1;


	
	for(int i = fim; i >= inicio;i--){
	cout << v[i] <<" ";
}
	cout << endl;
	
	delete[] v;

    return 0;
}
