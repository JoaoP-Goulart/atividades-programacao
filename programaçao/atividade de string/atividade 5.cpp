#include <iostream>
#include <string>
using namespace std;

int main() {
    string expressao;
    getline(cin, expressao);

    int cont = 0;
    bool incorreto = false;

    for(size_t i = 0; i < expressao.length(); i++) {
        if(expressao[i] == '('){
            cont++;
        }
        else if(expressao[i] == ')'){
            cont--;
        }
        if(cont < 0){
            incorreto = true;
            break;
        }
    }

    if(cont != 0) {
        incorreto = true;
    }

    if(incorreto){
        cout << "parenteses incorretos" << endl;
    }
    else{
        cout << "parenteses corretos" << endl;
    }

    return 0;
}
