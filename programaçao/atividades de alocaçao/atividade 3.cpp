#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	int* vA = new int[N];
	
	
	for(int i = 0; i < N;i++){
	cin >> vA[i];
}

for(int i = 0; i < N; i++){
	if(vA[i]%2 == 0){
		cout << vA[i] << " ";
	}
}
cout << endl;


for(int i = 0; i < N; i++){
	if(vA[i]%3 == 0){
		cout << vA[i] << " ";
	}
}
cout << endl;


for(int i = 0; i < N; i++){
	if(vA[i]%2 == 0 && vA[i]%3 == 0 ){
		cout << vA[i] << " ";
	}
	
}
cout << endl;



delete[] vA;

	return 0;
}

	

