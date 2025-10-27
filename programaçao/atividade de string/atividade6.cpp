#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra;
    getline(cin, palavra);
    
    string procura;
    getline(cin, procura);

   int cont = 0;
   int rep = 0;

    for(size_t i = 0; i < palavra.length() -procura.length() ; i++){
    for(size_t j = 0;j < procura.length();j++){
            if(palavra[i+j] == procura[j]){
            cont++;
            }
            else{
            break;
            }
            if(cont == (int)procura.length()){
				rep++;
				cont = 0;
			}
		}
	}
	
	cout << rep << endl;
   

    return 0;
}
