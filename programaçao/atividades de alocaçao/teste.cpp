#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	int* vA = new int[N];
	int* vB = new int[N];
	
	for(int i = 0; i < N;i++){
	cin >> vA[i];
}
for(int i = 0; i < N;i++){
	cin >> vB[i];
}

bool iguais = true;
for(int i = 0;i < N; i ++){
	bool achou = false;
	for(int j = 0; j < N;j++){
	if(vA[i] == vB[j]){
		achou = true;
		break;
	}
}
if(achou == false){
		iguais = false;
		break;
	}

}

if(iguais){
	cout << "IGUAIS" << endl;
}
else{
	cout << "DIFERENTES" << endl;
}
	

delete[] vA;
delete[] vB;
	return 0;
}
	
	
