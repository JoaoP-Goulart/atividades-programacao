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
	for(int j = 0; j < N;j++){
	if(vA[i] == vB[j]){
		iguais = true;
		break;
	}
	else{
		iguais = false;
	}
	
}

}

if(iguais == true){
	cout << "IGUAIS" << endl;
}
else{
	cout << "DIFERENTES" << endl;
}
	

delete[] vA;
delete[] vB;
	return 0;
}
	
	
