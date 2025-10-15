#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* v = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    bool temMult2 = false;
    bool temMult3 = false;
    bool temMult2e3 = false;

 
    for (int i = 0; i < N; i++) {
        if (v[i] % 2 == 0) {
            cout << v[i] << " ";
            temMult2 = true;
        }
    }
    if (!temMult2){
		 cout << 0;
		 }
    cout << endl;

    for (int i = 0; i < N; i++) {
        if (v[i] % 3 == 0) {
            cout << v[i] << " ";
            temMult3 = true;
        }
    }
    if (!temMult3) {
		cout << 0;
	}
    
    cout << endl;

    for (int i = 0; i < N; i++) {
        if (v[i] % 2 == 0 && v[i] % 3 == 0) {
            cout << v[i] << " ";
            temMult2e3 = true;
        }
    }
    if (!temMult2e3){
		 cout << 0;
	 }
    cout << endl;

    delete[] v; 
    return 0;
}
