#include <iostream>
using namespace std;

int main() {
    int n1;
    cin >> n1;

    string *v1 = new string[n1];
    for (int i = 0; i < n1; i++) {
        cin >> v1[i];
    }

    int n2;
    cin >> n2;

    string *v2 = new string[n2];
    for (int i = 0; i < n2; i++) {
        cin >> v2[i];
    }

    int ni = 0;
    string *inter = new string[ni];

    for (int j = 0; j < n2; j++) {
        bool encontrou = false;

        for (int i = 0; i < n1; i++) {
            if (v2[j] == v1[i]) {
                encontrou = true;  
            }
        }

        if (encontrou) {
            ni++;
            string *novo = new string[ni];

            for (int k = 0; k < ni - 1; k++) {
                novo[k] = inter[k];
            }

            novo[ni - 1] = v2[j];

            delete[] inter;
            inter = novo;
        }
    }

    for (int i = 0; i < ni; i++) {
        cout << inter[i] << endl;
    }

    cout << ni;

    delete[] v1;
    delete[] v2;
    delete[] inter;

    return 0;
}
